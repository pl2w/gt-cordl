#pragma once
// IWYU pragma private; include "GlobalNamespace/OnExitPlay_Set.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OnExitPlay_Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnExitPlay_Set)
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class OnExitPlay_Set;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnExitPlay_Set*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnExitPlay_Set*, "", "OnExitPlay_Set");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies OnExitPlay_Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnExitPlay_Set
class CORDL_TYPE OnExitPlay_Set : public ::GlobalNamespace::OnExitPlay_Attribute {
public:
// Declarations
/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::System::Object*  value;

static inline ::GlobalNamespace::OnExitPlay_Set* New_ctor(::System::Object*  value) ;

/// @brief Method OnEnterPlay, addr 0x5b0e3c4, size 0xe8, virtual true, abstract: false, final false
inline void OnEnterPlay(::System::Reflection::FieldInfo*  field) ;

constexpr ::System::Object* const& __cordl_internal_get_value() const;

constexpr ::System::Object*& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x5b0e394, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnExitPlay_Set() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnExitPlay_Set", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnExitPlay_Set(OnExitPlay_Set && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnExitPlay_Set", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnExitPlay_Set(OnExitPlay_Set const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3539};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnExitPlay_Set, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnExitPlay_Set) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
