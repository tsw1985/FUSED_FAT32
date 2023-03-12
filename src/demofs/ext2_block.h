#ifndef _EXT2_BLOCK_H
#define _EXT2_BLOCK_H

#include "ext2.h"
#include "ext2_inode.h"

int64_t ext2_read_block(struct ext2_partition* partition, uint32_t block, uint8_t * destination_buffer);
int64_t ext2_write_block(struct ext2_partition* partition, uint32_t block, uint8_t * source_buffer);
int64_t ext2_read_inode_bytes(struct ext2_partition* partition, uint32_t inode_number, uint8_t * destination_buffer, uint64_t count);
int64_t ext2_write_inode_bytes(struct ext2_partition* partition, uint32_t inode_number, uint8_t * source_buffer, uint64_t count);
uint8_t ext2_allocate_blocks(struct ext2_partition* partition, struct ext2_inode_descriptor_generic * inode, uint32_t blocks_to_allocate);
#endif /* _EXT2_BLOCK_H */