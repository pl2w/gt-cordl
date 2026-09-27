#pragma once
// IWYU pragma private; include "GlobalNamespace/OptionalRef_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OptionalRef_1)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class OptionalRef_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::OptionalRef_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OptionalRef_1, "", "OptionalRef`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: OptionalRef`1<T>
class CORDL_TYPE OptionalRef_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Field _enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _target, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) T  _target;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

static inline ::GlobalNamespace::OptionalRef_1<T>* New_ctor() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr T const& __cordl_internal_get__target() const;

constexpr T& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__target(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// @brief Method get_enabled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T op_Implicit_T(::GlobalNamespace::OptionalRef_1<T>*  r) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> op_Implicit___UnityW___UnityEngine__Object_(::GlobalNamespace::OptionalRef_1<T>*  r) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::GlobalNamespace::OptionalRef_1<T>*  r) ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(T  value) ;

/// @brief Method set_enabled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OptionalRef_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OptionalRef_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OptionalRef_1(OptionalRef_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OptionalRef_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OptionalRef_1(OptionalRef_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2833};

/// [SerializeField]
/// @brief Field _enabled, offset: 0x10, size: 0x1, def value: None
 bool  ____enabled;

/// [SerializeField]
/// @brief Field _target, offset: 0x18, size: 0x8, def value: None
 T  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
