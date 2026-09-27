#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlay_Set.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OnEnterPlay_Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnEnterPlay_Set)
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class OnEnterPlay_Set;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnEnterPlay_Set*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnEnterPlay_Set*, "", "OnEnterPlay_Set");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies OnEnterPlay_Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnEnterPlay_Set
class CORDL_TYPE OnEnterPlay_Set : public ::GlobalNamespace::OnEnterPlay_Attribute {
public:
// Declarations
/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::System::Object*  value;

static inline ::GlobalNamespace::OnEnterPlay_Set* New_ctor(::System::Object*  value) ;

/// @brief Method OnEnterPlay, addr 0x5b0db78, size 0x1c4, virtual true, abstract: false, final false
inline void OnEnterPlay(::System::Reflection::FieldInfo*  field) ;

constexpr ::System::Object* const& __cordl_internal_get_value() const;

constexpr ::System::Object*& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x5b0db48, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnEnterPlay_Set() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_Set", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnEnterPlay_Set(OnEnterPlay_Set && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_Set", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnEnterPlay_Set(OnEnterPlay_Set const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3530};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnEnterPlay_Set, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnEnterPlay_Set) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
