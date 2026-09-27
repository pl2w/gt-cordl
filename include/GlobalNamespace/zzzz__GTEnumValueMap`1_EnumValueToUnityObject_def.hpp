#pragma once
// IWYU pragma private; include "GlobalNamespace/GTEnumValueMap`1_EnumValueToUnityObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTEnumValueMap`1_EnumValueToUnityObject)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct GTEnumValueMap_1_EnumValueToUnityObject;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject, "", "GTEnumValueMap`1/EnumValueToUnityObject");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: GTEnumValueMap`1/EnumValueToUnityObject<T>
struct CORDL_TYPE GTEnumValueMap_1_EnumValueToUnityObject {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTEnumValueMap_1_EnumValueToUnityObject() ;

// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "enumKey", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "enumName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr GTEnumValueMap_1_EnumValueToUnityObject(bool  enabled, int64_t  enumKey, ::StringW  enumName, T  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{674};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
 bool  enabled;

/// @brief Field enumKey, offset: 0x8, size: 0x8, def value: None
 int64_t  enumKey;

/// @brief Field enumName, offset: 0x10, size: 0x8, def value: None
 ::StringW  enumName;

/// @brief Field value, offset: 0x18, size: 0x8, def value: None
 T  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
