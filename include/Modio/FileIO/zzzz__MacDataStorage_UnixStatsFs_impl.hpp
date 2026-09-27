#pragma once
// IWYU pragma private; include "Modio/FileIO/MacDataStorage_UnixStatsFs.hpp"
#include "Modio/FileIO/zzzz__MacDataStorage_UnixStatsFs_def.hpp"
// Ctor Parameters [CppParam { name: "f_bsize", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_frsize", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_blocks", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_bfree", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_bavail", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_files", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_ffre", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_favail", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_fsid", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_flag", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f_namemax", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MacDataStorage_UnixStatsFs::MacDataStorage_UnixStatsFs(uint64_t  f_bsize, uint64_t  f_frsize, uint64_t  f_blocks, uint64_t  f_bfree, uint64_t  f_bavail, uint64_t  f_files, uint64_t  f_ffre, uint64_t  f_favail, uint64_t  f_fsid, uint64_t  f_flag, uint64_t  f_namemax) noexcept  {
this->f_bsize = f_bsize;
this->f_frsize = f_frsize;
this->f_blocks = f_blocks;
this->f_bfree = f_bfree;
this->f_bavail = f_bavail;
this->f_files = f_files;
this->f_ffre = f_ffre;
this->f_favail = f_favail;
this->f_fsid = f_fsid;
this->f_flag = f_flag;
this->f_namemax = f_namemax;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MacDataStorage_UnixStatsFs::MacDataStorage_UnixStatsFs()   {
}
