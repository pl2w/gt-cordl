#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneRefGlobalHub.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XSceneRefGlobalHub)
namespace GlobalNamespace {
struct SceneIndex;
}
namespace GlobalNamespace {
class XSceneRefTarget;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class XSceneRefGlobalHub;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XSceneRefGlobalHub*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XSceneRefGlobalHub*, "", "XSceneRefGlobalHub");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: XSceneRefGlobalHub
class CORDL_TYPE XSceneRefGlobalHub : public ::System::Object {
public:
// Declarations
/// @brief Field registry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registry, put=setStaticF_registry)) ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::XSceneRefTarget>>*>*  registry;

/// @brief Method Register, addr 0x56ba7bc, size 0xdc, virtual false, abstract: false, final false
static inline void Register(int32_t  _cordl_ID, ::GlobalNamespace::XSceneRefTarget*  obj) ;

/// @brief Method TryResolve, addr 0x56ba628, size 0xb8, virtual false, abstract: false, final false
static inline bool TryResolve(::GlobalNamespace::SceneIndex  sceneIndex, int32_t  _cordl_ID, ::by_ref<::GlobalNamespace::XSceneRefTarget*>  result) ;

/// @brief Method Unregister, addr 0x56ba898, size 0x22c, virtual false, abstract: false, final false
static inline void Unregister(int32_t  _cordl_ID, ::GlobalNamespace::XSceneRefTarget*  obj) ;

static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::XSceneRefTarget>>*>* getStaticF_registry() ;

static inline void setStaticF_registry(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::XSceneRefTarget>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XSceneRefGlobalHub() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XSceneRefGlobalHub", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XSceneRefGlobalHub(XSceneRefGlobalHub && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XSceneRefGlobalHub", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XSceneRefGlobalHub(XSceneRefGlobalHub const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{970};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::XSceneRefGlobalHub) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
