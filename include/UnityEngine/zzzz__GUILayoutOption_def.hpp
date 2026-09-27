#pragma once
// IWYU pragma private; include "UnityEngine/GUILayoutOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_Type_def.hpp"
CORDL_MODULE_EXPORT(GUILayoutOption)
namespace GlobalNamespace {
struct GUILayoutOption_Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutOption;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUILayoutOption*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUILayoutOption*, "UnityEngine", "GUILayoutOption");
// Dependencies System.Object, UnityEngine.GUILayoutOption::Type
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUILayoutOption
class CORDL_TYPE GUILayoutOption : public ::System::Object {
public:
// Declarations
using Type = ::GlobalNamespace::GUILayoutOption_Type;

/// @brief Field type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::GUILayoutOption_Type  type;

/// @brief Field value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::System::Object*  value;

static inline ::UnityEngine::GUILayoutOption* New_ctor(::GlobalNamespace::GUILayoutOption_Type  type, ::System::Object*  value) ;

constexpr ::GlobalNamespace::GUILayoutOption_Type const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::GUILayoutOption_Type& __cordl_internal_get_type() ;

constexpr ::System::Object* const& __cordl_internal_get_value() const;

constexpr ::System::Object*& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::GUILayoutOption_Type  value) ;

constexpr void __cordl_internal_set_value(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xb6462dc, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GUILayoutOption_Type  type, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUILayoutOption() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutOption", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUILayoutOption(GUILayoutOption && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutOption", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUILayoutOption(GUILayoutOption const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28820};

/// @brief Field type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GUILayoutOption_Type  ___type;

/// @brief Field value, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUILayoutOption, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutOption, ___value) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GUILayoutOption) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
