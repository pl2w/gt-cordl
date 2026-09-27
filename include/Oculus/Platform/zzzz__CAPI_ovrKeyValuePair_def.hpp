#pragma once
// IWYU pragma private; include "Oculus/Platform/CAPI_ovrKeyValuePair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__KeyValuePairType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CAPI_ovrKeyValuePair)
// Forward declare root types
namespace GlobalNamespace {
struct CAPI_ovrKeyValuePair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CAPI_ovrKeyValuePair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CAPI_ovrKeyValuePair, "Oculus.Platform", "CAPI/ovrKeyValuePair");
// Dependencies Oculus.Platform.KeyValuePairType
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Platform.CAPI/ovrKeyValuePair
struct CORDL_TYPE CAPI_ovrKeyValuePair {
public:
// Declarations
/// @brief Method .ctor, addr 0xa51c0b8, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::StringW  value) ;

/// @brief Method .ctor, addr 0xa51c0f8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, double_t  value) ;

/// @brief Method .ctor, addr 0xa51bb38, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CAPI_ovrKeyValuePair() ;

// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "valueType_", ty: "::Oculus::Platform::KeyValuePairType", modifiers: "", def_value: None, comment: None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "doubleValue_", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr CAPI_ovrKeyValuePair(::StringW  key_, ::Oculus::Platform::KeyValuePairType  valueType_, ::StringW  stringValue_, int32_t  intValue_, double_t  doubleValue_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key_, offset: 0x0, size: 0x8, def value: None
 ::StringW  key_;

/// @brief Field valueType_, offset: 0x8, size: 0x4, def value: None
 ::Oculus::Platform::KeyValuePairType  valueType_;

/// @brief Field stringValue_, offset: 0x10, size: 0x8, def value: None
 ::StringW  stringValue_;

/// @brief Field intValue_, offset: 0x18, size: 0x4, def value: None
 int32_t  intValue_;

/// @brief Field doubleValue_, offset: 0x20, size: 0x8, def value: None
 double_t  doubleValue_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CAPI_ovrKeyValuePair, key_) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_ovrKeyValuePair, valueType_) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_ovrKeyValuePair, stringValue_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_ovrKeyValuePair, intValue_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_ovrKeyValuePair, doubleValue_) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CAPI_ovrKeyValuePair) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
