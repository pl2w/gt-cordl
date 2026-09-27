#pragma once
// IWYU pragma private; include "UnityEngine/EnumDataUtility___c__DisplayClass8_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EnumDataUtility___c__DisplayClass8_0)
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct EnumDataUtility___c__DisplayClass8_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnumDataUtility___c__DisplayClass8_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnumDataUtility___c__DisplayClass8_0, "UnityEngine", "EnumDataUtility/<>c__DisplayClass8_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.EnumDataUtility/<>c__DisplayClass8_0
struct CORDL_TYPE EnumDataUtility___c__DisplayClass8_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EnumDataUtility___c__DisplayClass8_0() ;

// Ctor Parameters [CppParam { name: "nicifyName", ty: "::System::Func_2<::StringW,::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: None, comment: None }]
constexpr EnumDataUtility___c__DisplayClass8_0(::System::Func_2<::StringW,::StringW>*  nicifyName, ::System::Reflection::FieldInfo*  field) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15075};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field nicifyName, offset: 0x0, size: 0x8, def value: None
 ::System::Func_2<::StringW,::StringW>*  nicifyName;

/// @brief Field field, offset: 0x8, size: 0x8, def value: None
 ::System::Reflection::FieldInfo*  field;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnumDataUtility___c__DisplayClass8_0, nicifyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnumDataUtility___c__DisplayClass8_0, field) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnumDataUtility___c__DisplayClass8_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
