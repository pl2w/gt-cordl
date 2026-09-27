#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MothershipWebSocketDispatcher)
// Forward declare root types
namespace GlobalNamespace {
class MothershipWebSocketDispatcher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipWebSocketDispatcher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketDispatcher*, "", "MothershipWebSocketDispatcher");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWebSocketDispatcher
class CORDL_TYPE MothershipWebSocketDispatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>  _instance;

/// @brief Field _isApplicationQuitting, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isApplicationQuitting, put=setStaticF__isApplicationQuitting)) bool  _isApplicationQuitting;

/// @brief Method Awake, addr 0x53c1d08, size 0x184, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MothershipWebSocketDispatcher* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x53c1f28, size 0x74, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0x53c1f9c, size 0xe0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Update, addr 0x53c1e8c, size 0x9c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x53c207c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher> getStaticF__instance() ;

static inline bool getStaticF__isApplicationQuitting() ;

/// @brief Method get_instance, addr 0x53c1b94, size 0x174, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher> get_instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>  value) ;

static inline void setStaticF__isApplicationQuitting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWebSocketDispatcher(MothershipWebSocketDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWebSocketDispatcher(MothershipWebSocketDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9779};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipWebSocketDispatcher) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
