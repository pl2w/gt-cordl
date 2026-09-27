#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SingletonMonoBehaviour_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SingletonMonoBehaviour_1)
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
template<typename T>
class SingletonMonoBehaviour_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1, "Meta.XR.MRUtilityKit.SceneDecorator", "SingletonMonoBehaviour`1");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SingletonMonoBehaviour`1<T>
class CORDL_TYPE SingletonMonoBehaviour_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) T  _instance;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InitializeSingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void InitializeSingleton() ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline T getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T get_Instance() ;

static inline void setStaticF__instance(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingletonMonoBehaviour_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingletonMonoBehaviour_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SingletonMonoBehaviour_1(SingletonMonoBehaviour_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingletonMonoBehaviour_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingletonMonoBehaviour_1(SingletonMonoBehaviour_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25967};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
