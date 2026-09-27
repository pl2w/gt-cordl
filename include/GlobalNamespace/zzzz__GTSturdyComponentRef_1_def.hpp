#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSturdyComponentRef_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GTSturdyComponentRef_1)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct GTSturdyComponentRef_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::GTSturdyComponentRef_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::GTSturdyComponentRef_1, "", "GTSturdyComponentRef`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: GTSturdyComponentRef`1<T>
struct CORDL_TYPE GTSturdyComponentRef_1 {
public:
// Declarations
 __declspec(property(get=get_BaseXform, put=set_BaseXform)) ::UnityW<::UnityEngine::Transform>  BaseXform;

 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Method get_BaseXform, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_BaseXform() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T op_Implicit_T(::GlobalNamespace::GTSturdyComponentRef_1<T>  sturdyRef) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTSturdyComponentRef_1<T> op_Implicit___GlobalNamespace__GTSturdyComponentRef_1_T_(T  component) ;

/// @brief Method set_BaseXform, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_BaseXform(::UnityEngine::Transform*  value) ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTSturdyComponentRef_1() ;

// Ctor Parameters [CppParam { name: "_value", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "_relativePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_baseXform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }]
constexpr GTSturdyComponentRef_1(T  _value, ::StringW  _relativePath, ::UnityW<::UnityEngine::Transform>  _baseXform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{787};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [SerializeField]
/// @brief Field _value, offset: 0x0, size: 0x8, def value: None
 T  _value;

/// [SerializeField]
/// @brief Field _relativePath, offset: 0x8, size: 0x8, def value: None
 ::StringW  _relativePath;

/// [SerializeField]
/// @brief Field _baseXform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  _baseXform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
