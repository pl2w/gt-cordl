#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaParent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaParent)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaParent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaParent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaParent*, "", "GorillaParent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaParent
class CORDL_TYPE GorillaParent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field i, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GorillaParent>  instance;

/// @brief Field onReplicatedClientReady, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onReplicatedClientReady, put=setStaticF_onReplicatedClientReady)) ::System::Action*  onReplicatedClientReady;

/// @brief Field replicatedClientReady, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_replicatedClientReady, put=setStaticF_replicatedClientReady)) bool  replicatedClientReady;

/// @brief Method Awake, addr 0x591ff7c, size 0x134, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaParent* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59200b0, size 0xc8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnReplicatedClientReady, addr 0x59201e4, size 0xdc, virtual false, abstract: false, final false
static inline void OnReplicatedClientReady(::System::Action*  action) ;

/// @brief Method ReplicatedClientReady, addr 0x5920178, size 0x6c, virtual false, abstract: false, final false
static inline void ReplicatedClientReady() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

/// @brief Method .ctor, addr 0x59202c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::GorillaParent> getStaticF_instance() ;

static inline ::System::Action* getStaticF_onReplicatedClientReady() ;

static inline bool getStaticF_replicatedClientReady() ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GorillaParent>  value) ;

static inline void setStaticF_onReplicatedClientReady(::System::Action*  value) ;

static inline void setStaticF_replicatedClientReady(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaParent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaParent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaParent(GorillaParent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaParent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaParent(GorillaParent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2210};

/// @brief Field i, offset: 0x20, size: 0x4, def value: None
 int32_t  ___i;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaParent, ___i) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaParent) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
