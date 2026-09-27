#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZlibConstants)
// Forward declare root types
namespace Ionic::Zlib {
class ZlibConstants;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::ZlibConstants*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::ZlibConstants*, "Ionic.Zlib", "ZlibConstants");
// Dependencies System.Object
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.ZlibConstants
class CORDL_TYPE ZlibConstants : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZlibConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZlibConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZlibConstants(ZlibConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZlibConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZlibConstants(ZlibConstants const& ) = delete;

/// @brief Field WindowBitsDefault offset 0xffffffff size 0x4
static constexpr int32_t  WindowBitsDefault{static_cast<int32_t>(0xf)};

/// @brief Field WindowBitsMax offset 0xffffffff size 0x4
static constexpr int32_t  WindowBitsMax{static_cast<int32_t>(0xf)};

/// @brief Field WorkingBufferSizeDefault offset 0xffffffff size 0x4
static constexpr int32_t  WorkingBufferSizeDefault{static_cast<int32_t>(0x4000)};

/// @brief Field WorkingBufferSizeMin offset 0xffffffff size 0x4
static constexpr int32_t  WorkingBufferSizeMin{static_cast<int32_t>(0x400)};

/// @brief Field Z_BUF_ERROR offset 0xffffffff size 0x4
static constexpr int32_t  Z_BUF_ERROR{static_cast<int32_t>(0xfffffffb)};

/// @brief Field Z_DATA_ERROR offset 0xffffffff size 0x4
static constexpr int32_t  Z_DATA_ERROR{static_cast<int32_t>(0xfffffffd)};

/// @brief Field Z_NEED_DICT offset 0xffffffff size 0x4
static constexpr int32_t  Z_NEED_DICT{static_cast<int32_t>(0x2)};

/// @brief Field Z_OK offset 0xffffffff size 0x4
static constexpr int32_t  Z_OK{static_cast<int32_t>(0x0)};

/// @brief Field Z_STREAM_END offset 0xffffffff size 0x4
static constexpr int32_t  Z_STREAM_END{static_cast<int32_t>(0x1)};

/// @brief Field Z_STREAM_ERROR offset 0xffffffff size 0x4
static constexpr int32_t  Z_STREAM_ERROR{static_cast<int32_t>(0xfffffffe)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Ionic::Zlib::ZlibConstants) == 0x10, "Size mismatch!");

} // namespace end def Ionic::Zlib
