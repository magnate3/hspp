
#ifndef TAP_H
#define TAP_H

#include <stdint.h>
struct rte_mempool;
struct rte_mbuf;
struct ether_addr;

struct rte_mbuf* tap_recv(int fd, struct rte_mempool* mp);
void tap_send(int fd, struct rte_mbuf* m);
int tap_alloc(uint32_t addr_little, struct ether_addr* hwaddr);

#endif /* TAP_H */
