#pragma once
// IWYU pragma private; include "GlobalNamespace/Ref_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Ref_1)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class Ref_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::Ref_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::Ref_1, "", "Ref`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Ref`1<T>
class CORDL_TYPE Ref_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AsT, put=set_AsT)) T  AsT;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Object>  _target;

static inline ::GlobalNamespace::Ref_1<T>* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AsT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_AsT() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T op_Implicit_T(::GlobalNamespace::Ref_1<T>*  r) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> op_Implicit___UnityW___UnityEngine__Object_(::GlobalNamespace::Ref_1<T>*  r) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::GlobalNamespace::Ref_1<T>*  r) ;

/// @brief Method set_AsT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_AsT(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ref_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ref_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ref_1(Ref_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ref_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ref_1(Ref_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2527};

/// [SerializeField]
/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
