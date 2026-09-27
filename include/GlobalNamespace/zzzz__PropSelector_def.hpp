#pragma once
// IWYU pragma private; include "GlobalNamespace/PropSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropSelector)
namespace GlobalNamespace {
class PropSelector___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Random;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PropSelector;
}
namespace GlobalNamespace {
class PropSelector___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropSelector*);
MARK_REF_T(::GlobalNamespace::PropSelector___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropSelector*, "", "PropSelector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropSelector___c*, "", "PropSelector/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropSelector
class CORDL_TYPE PropSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::PropSelector___c;

/// @brief Field _desiredActivePropsNum, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__desiredActivePropsNum, put=__cordl_internal_set__desiredActivePropsNum)) int32_t  _desiredActivePropsNum;

/// @brief Field _gRandom, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gRandom, put=setStaticF__gRandom)) ::System::Random*  _gRandom;

/// @brief Field _props, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__props, put=__cordl_internal_set__props)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _props;

static inline ::GlobalNamespace::PropSelector* New_ctor() ;

/// @brief Method Start, addr 0x563fee0, size 0x280, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get__desiredActivePropsNum() const;

constexpr int32_t& __cordl_internal_get__desiredActivePropsNum() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__props() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__props() ;

constexpr void __cordl_internal_set__desiredActivePropsNum(int32_t  value) ;

constexpr void __cordl_internal_set__props(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x5640160, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Random* getStaticF__gRandom() ;

static inline void setStaticF__gRandom(::System::Random*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropSelector(PropSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropSelector(PropSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{646};

/// [SerializeField]
/// @brief Field _props, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____props;

/// [SerializeField]
/// @brief Field _desiredActivePropsNum, offset: 0x28, size: 0x4, def value: None
 int32_t  ____desiredActivePropsNum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropSelector, ____props) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropSelector, ____desiredActivePropsNum) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropSelector) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropSelector/<>c
class CORDL_TYPE PropSelector___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PropSelector___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  __9__3_0;

static inline ::GlobalNamespace::PropSelector___c* New_ctor() ;

/// @brief Method <Start>b__3_0, addr 0x56402dc, size 0x68, virtual false, abstract: false, final false
inline int32_t _Start_b__3_0(::UnityEngine::GameObject*  x) ;

/// @brief Method .ctor, addr 0x56402d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PropSelector___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::GlobalNamespace::PropSelector___c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropSelector___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropSelector___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropSelector___c(PropSelector___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropSelector___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropSelector___c(PropSelector___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{645};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PropSelector___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
