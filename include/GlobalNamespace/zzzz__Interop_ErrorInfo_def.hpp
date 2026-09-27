#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_ErrorInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_Error_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_ErrorInfo)
namespace GlobalNamespace {
struct Interop_Error;
}
// Forward declare root types
namespace GlobalNamespace {
struct Interop_ErrorInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Interop_ErrorInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_ErrorInfo, "", "Interop/ErrorInfo");
// Dependencies Interop::Error
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/ErrorInfo
struct CORDL_TYPE Interop_ErrorInfo {
public:
// Declarations
 __declspec(property(get=get_Error)) ::GlobalNamespace::Interop_Error  Error;

 __declspec(property(get=get_RawErrno)) int32_t  RawErrno;

/// @brief Method GetErrorMessage, addr 0xa10cb38, size 0x64, virtual false, abstract: false, final false
inline ::StringW GetErrorMessage() ;

/// @brief Method ToString, addr 0xa10cd84, size 0xc0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa10cc04, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_errno) ;

/// @brief Method .ctor, addr 0xa10cc70, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Interop_Error  error) ;

/// @brief Method get_Error, addr 0xa10cc7c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Interop_Error get_Error() ;

/// @brief Method get_RawErrno, addr 0xa10cacc, size 0x6c, virtual false, abstract: false, final false
inline int32_t get_RawErrno() ;

// Ctor Parameters []
// @brief default ctor
constexpr Interop_ErrorInfo() ;

// Ctor Parameters [CppParam { name: "_error", ty: "::GlobalNamespace::Interop_Error", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rawErrno", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Interop_ErrorInfo(::GlobalNamespace::Interop_Error  _error, int32_t  _rawErrno) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5311};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _error, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Interop_Error  _error;

/// @brief Field _rawErrno, offset: 0x4, size: 0x4, def value: None
 int32_t  _rawErrno;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Interop_ErrorInfo, _error) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Interop_ErrorInfo, _rawErrno) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Interop_ErrorInfo) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
