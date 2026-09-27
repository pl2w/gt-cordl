#pragma once
// IWYU pragma private; include "PlayFab/Internal/SingletonMonoBehaviour_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SingletonMonoBehaviour_1)
// Forward declare root types
namespace PlayFab::Internal {
template<typename T>
class SingletonMonoBehaviour_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayFab::Internal::SingletonMonoBehaviour_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayFab::Internal::SingletonMonoBehaviour_1, "PlayFab.Internal", "SingletonMonoBehaviour`1");
// Dependencies UnityEngine.MonoBehaviour
namespace PlayFab::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PlayFab.Internal.SingletonMonoBehaviour`1<T>
class CORDL_TYPE SingletonMonoBehaviour_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) T  _instance;

/// @brief Field initialized, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CreateInstance() ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::PlayFab::Internal::SingletonMonoBehaviour_1<T>* New_ctor() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline T getStaticF__instance() ;

/// @brief Method get_instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T get_instance() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19935};

/// @brief Field initialized, offset: 0x20, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::Internal
