#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xca05c877, __VMLINUX_SYMBOL_STR(module_layout) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd03a6fb4, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x9fb910f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x2f7c36b3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x70778d8f, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa3647646, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xb439ab6f, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x1c7615e6, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x1c8c9783, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xbd100793, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x3616ceb8, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xee7e477e, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0xdafac90b, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0xbe62c3bb, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xfb6638cc, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x23787eb, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x41721113, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0xd0068838, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x1ab49e22, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x5925ca21, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x25dab3f3, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x1af04343, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe95d6784, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1694aca, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3669d163, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xa2bc235a, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xae074132, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1afdaf84, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x8da84edd, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0x79e3ba1, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xfeb81b78, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1dc66590, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbdf4c9b3, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xe6b4e52a, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x93beec29, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x9cdf8957, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x84f1a257, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x17dfdf68, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x69ab919d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x56dbb168, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x2e12f5e5, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xb1f8ce5f, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xcae6504d, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x7091ac0, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x75422663, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf0f89e0b, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x30845f4, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x309c0e1b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xbf694960, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x48992e5b, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xf5a8b5b3, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd4ff98d2, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xf0409d74, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x78bc02d7, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x9b6c658b, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfc76caa5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x112afd17, __VMLINUX_SYMBOL_STR(pm_schedule_suspend) },
	{ 0xbaebaf60, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x192559a, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x791164af, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7ac3714, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x25563496, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x3a04f572, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xfeb17cb5, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x2403d8b1, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0x2b8f4e02, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x2d144e5f, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xd8eb900a, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xccb583e8, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x522ad8f6, __VMLINUX_SYMBOL_STR(pci_num_vf) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xfaf6d7ab, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0x5551511f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0xd0cf6116, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x7193f296, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x18511b0a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x241bc738, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xa5b69d14, __VMLINUX_SYMBOL_STR(ndo_dflt_bridge_getlink) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x6bbb9cc6, __VMLINUX_SYMBOL_STR(pci_vfs_assigned) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xffb48f6b, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x989fccd8, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xcc7bc244, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x293ac5ce, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x8f038c78, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xa6a439f2, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9b739b35, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x7d35246c, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x5764ad47, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0x36511654, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x5907da33, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5d66d8c9, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0xc09adf3c, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xf5741fff, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4835b291, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x6e349f33, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x88e511b4, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00001F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001538sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001539sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001527sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001516sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000438sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001526sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A96F44ED39F805F66FE49B");
