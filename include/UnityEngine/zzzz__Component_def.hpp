#pragma once
// IWYU pragma private; include "UnityEngine/Component.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Component)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct SendMessageOptions;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class Component;
}
// Write type traits
MARK_REF_T(::UnityEngine::Component*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Component*, "UnityEngine", "Component");
// [NativeHeader("Runtime/Export/Scripting/Component.bindings.h")]
// [NativeClass("Unity::Component")]
// [RequiredByNativeCode]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Component
class CORDL_TYPE Component : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

 __declspec(property(get=get_tag, put=set_tag)) ::StringW  tag;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// [FreeFunction("BroadcastMessage", HasExplicitThis = true)]
/// @brief Method BroadcastMessage, addr 0xb5dcd90, size 0x1b8, virtual false, abstract: false, final false
inline void BroadcastMessage(::StringW  methodName, /* [DefaultValue("null")] */ ::System::Object*  parameter, /* [DefaultValue("SendMessageOptions.RequireReceiver")] */ ::UnityEngine::SendMessageOptions  options) ;

/// @brief Method BroadcastMessage_Injected, addr 0xb5dcf48, size 0x5c, virtual false, abstract: false, final false
static inline void BroadcastMessage_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  methodName, /* [DefaultValue("null")] */ ::System::Object*  parameter, /* [DefaultValue("SendMessageOptions.RequireReceiver")] */ ::UnityEngine::SendMessageOptions  options) ;

/// @brief Method CompareTag, addr 0xb5dcb50, size 0x20, virtual false, abstract: false, final false
inline bool CompareTag(::StringW  tag) ;

/// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
/// @brief Method GetComponent, addr 0xb5dc2a8, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponent(::System::Type*  type) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponent() ;

/// [FreeFunction(HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetComponentFastPath, addr 0xb5dc36c, size 0x90, virtual false, abstract: false, final false
inline void GetComponentFastPath(::System::Type*  type, ::System::IntPtr  oneFurtherThanResultValue) ;

/// @brief Method GetComponentFastPath_Injected, addr 0xb5dc3fc, size 0x54, virtual false, abstract: false, final false
static inline void GetComponentFastPath_Injected(::System::IntPtr  _unity_self, ::System::Type*  type, ::System::IntPtr  oneFurtherThanResultValue) ;

/// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
/// @brief Method GetComponentInChildren, addr 0xb5dc508, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type*  t, bool  includeInactive) ;

/// [ExcludeFromDocs]
/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInChildren() ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInChildren(/* [DefaultValue("false")] */ bool  includeInactive) ;

/// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
/// @brief Method GetComponentInParent, addr 0xb5dc5e4, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type*  t, bool  includeInactive) ;

/// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInParent() ;

/// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInParent(/* [DefaultValue("false")] */ bool  includeInactive) ;

/// @brief Method GetComponents, addr 0xb5dc6c0, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponents(::System::Type*  type) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetComponents() ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponents(::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetComponents, addr 0xb5dc84c, size 0x4, virtual false, abstract: false, final false
inline void GetComponents(::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results) ;

/// [FreeFunction(HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetComponentsForListInternal, addr 0xb5dc768, size 0x90, virtual false, abstract: false, final false
inline void GetComponentsForListInternal(::System::Type*  searchType, ::System::Object*  resultList) ;

/// @brief Method GetComponentsForListInternal_Injected, addr 0xb5dc7f8, size 0x54, virtual false, abstract: false, final false
static inline void GetComponentsForListInternal_Injected(::System::IntPtr  _unity_self, ::System::Type*  searchType, ::System::Object*  resultList) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetComponentsInChildren() ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetComponentsInChildren(bool  includeInactive) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponentsInChildren(bool  includeInactive, ::System::Collections::Generic::List_1<T>*  result) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponentsInChildren(::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetComponentsInParent() ;

/// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetComponentsInParent(bool  includeInactive) ;

/// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponentsInParent(bool  includeInactive, ::System::Collections::Generic::List_1<T>*  results) ;

static inline ::UnityEngine::Component* New_ctor() ;

/// @brief Method SendMessage, addr 0xb5dcb74, size 0x8, virtual false, abstract: false, final false
inline void SendMessage(::StringW  methodName, ::System::Object*  value) ;

/// [FreeFunction("SendMessage", HasExplicitThis = true)]
/// @brief Method SendMessage, addr 0xb5dcb7c, size 0x1b8, virtual false, abstract: false, final false
inline void SendMessage(::StringW  methodName, ::System::Object*  value, ::UnityEngine::SendMessageOptions  options) ;

/// @brief Method SendMessage_Injected, addr 0xb5dcd34, size 0x5c, virtual false, abstract: false, final false
static inline void SendMessage_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  methodName, ::System::Object*  value, ::UnityEngine::SendMessageOptions  options) ;

/// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetComponent(::by_ref<T>  component) ;

/// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
/// @brief Method TryGetComponent, addr 0xb5dc450, size 0x30, virtual false, abstract: false, final false
inline bool TryGetComponent(::System::Type*  type, ::by_ref<::UnityEngine::Component*>  component) ;

/// @brief Method .ctor, addr 0xb5dba78, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// [FreeFunction("GetGameObject", HasExplicitThis = true)]
/// @brief Method get_gameObject, addr 0xb5dc1d8, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_gameObject() ;

/// @brief Method get_gameObject_Injected, addr 0xb5dc26c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_gameObject_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_tag, addr 0xb5dc850, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// [FreeFunction("GetTransform", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method get_transform, addr 0xb5dc108, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// @brief Method get_transform_Injected, addr 0xb5dc19c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_transform_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_tag, addr 0xb5dc994, size 0x20, virtual false, abstract: false, final false
inline void set_tag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Component() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Component(Component && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Component(Component const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15066};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Component) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
