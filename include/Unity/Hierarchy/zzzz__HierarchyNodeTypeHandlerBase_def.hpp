#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeTypeHandlerBase)
namespace GlobalNamespace {
struct HierarchyNodeTypeHandlerBase_ConstructorScope;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace Unity::Hierarchy {
class HierarchyCommandList;
}
namespace Unity::Hierarchy {
struct HierarchyNodeFlags;
}
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchySearchQueryDescriptor;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase;
}
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*);
MARK_REF_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBase");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller*, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBase/BindingsMarshaller");
// [NativeHeader("Modules/HierarchyCore/Public/HierarchyNodeTypeHandlerBase.h")]
// [NativeHeader("Modules/HierarchyCore/HierarchyNodeTypeHandlerBaseBindings.h")]
// [RequiredByNativeCode(GenerateProxy = true)]
// Dependencies System.IntPtr, System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBase
class CORDL_TYPE HierarchyNodeTypeHandlerBase : public ::System::Object {
public:
// Declarations
using ConstructorScope = ::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope;

using BindingsMarshaller = ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller;

/// @brief Field m_CommandList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CommandList, put=__cordl_internal_set_m_CommandList)) ::Unity::Hierarchy::HierarchyCommandList*  m_CommandList;

/// @brief Field m_Hierarchy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hierarchy, put=__cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy*  m_Hierarchy;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Field s_NodeTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NodeTypes, put=setStaticF_s_NodeTypes)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  s_NodeTypes;

/// [FreeFunction("HierarchyNodeTypeHandlerBaseBindings::ChangesPending", HasExplicitThis = true, IsThreadSafe = true)]
/// [Obsolete("ChangesPending is obsolete, it is replaced by adding commands into the hierarchy node type handler\'s CommandList.", false)]
/// @brief Method ChangesPending, addr 0xb633f24, size 0x90, virtual true, abstract: false, final false
inline bool ChangesPending() ;

/// @brief Method ChangesPending_Injected, addr 0xb633fb4, size 0x3c, virtual false, abstract: false, final false
static inline bool ChangesPending_Injected(::System::IntPtr  _unity_self) ;

/// [RequiredByNativeCode]
/// @brief Method CreateNodeTypeHandlerFromType, addr 0xb6336e8, size 0x200, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateNodeTypeHandlerFromType(::System::IntPtr  nativePtr, ::System::Type*  handlerType, ::System::IntPtr  hierarchyPtr, ::System::IntPtr  cmdListPtr) ;

/// @brief Method Dispose, addr 0xb6330cc, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.HierarchyModule" })]
/// @brief Method FromIntPtr, addr 0xb6335e8, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* FromIntPtr(::System::IntPtr  handlePtr) ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method GetDefaultNodeFlags, addr 0xb633258, size 0xa8, virtual true, abstract: false, final false
inline ::Unity::Hierarchy::HierarchyNodeFlags GetDefaultNodeFlags(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags) ;

/// @brief Method GetDefaultNodeFlags_Injected, addr 0xb633300, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Hierarchy::HierarchyNodeFlags GetDefaultNodeFlags_Injected(::System::IntPtr  _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetNodeTypeName, addr 0xb6330d0, size 0x144, virtual true, abstract: false, final false
inline ::StringW GetNodeTypeName() ;

/// @brief Method GetNodeTypeName_Injected, addr 0xb633214, size 0x44, virtual false, abstract: false, final false
static inline void GetNodeTypeName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method Initialize, addr 0xb6330c8, size 0x4, virtual true, abstract: false, final false
inline void Initialize() ;

/// [Obsolete("IntegrateChanges is obsolete, it is replaced by adding commands into the hierarchy node type handler\'s CommandList.", false)]
/// [FreeFunction("HierarchyNodeTypeHandlerBaseBindings::IntegrateChanges", HasExplicitThis = true, IsThreadSafe = true)]
/// @brief Method IntegrateChanges, addr 0xb633ff0, size 0xa0, virtual true, abstract: false, final false
inline bool IntegrateChanges(::Unity::Hierarchy::HierarchyCommandList*  cmdList) ;

/// @brief Method IntegrateChanges_Injected, addr 0xb634090, size 0x44, virtual false, abstract: false, final false
static inline bool IntegrateChanges_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  cmdList) ;

/// @brief Method Internal_SearchBegin, addr 0xb6336dc, size 0xc, virtual false, abstract: false, final false
inline void Internal_SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor*  query) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeChangesPending, addr 0xb633d40, size 0x6c, virtual false, abstract: false, final false
static inline bool InvokeChangesPending(::System::IntPtr  handlePtr) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeDispose, addr 0xb633bac, size 0xa4, virtual false, abstract: false, final false
static inline void InvokeDispose(::System::IntPtr  handlePtr) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeGetDefaultNodeFlags, addr 0xb633cbc, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Hierarchy::HierarchyNodeFlags InvokeGetDefaultNodeFlags(::System::IntPtr  handlePtr, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeGetNodeTypeName, addr 0xb633c50, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW InvokeGetNodeTypeName(::System::IntPtr  handlePtr) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeInitialize, addr 0xb633b40, size 0x6c, virtual false, abstract: false, final false
static inline void InvokeInitialize(::System::IntPtr  handlePtr) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeIntegrateChanges, addr 0xb633dac, size 0x90, virtual false, abstract: false, final false
static inline bool InvokeIntegrateChanges(::System::IntPtr  handlePtr, ::System::IntPtr  cmdListPtr) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeSearchEnd, addr 0xb633eb8, size 0x6c, virtual false, abstract: false, final false
static inline void InvokeSearchEnd(::System::IntPtr  handlePtr) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeSearchMatch, addr 0xb633e3c, size 0x7c, virtual false, abstract: false, final false
static inline bool InvokeSearchMatch(::System::IntPtr  handlePtr, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// [FreeFunction("HierarchyNodeTypeHandlerBaseBindings::SearchBegin", HasExplicitThis = true, IsThreadSafe = true)]
/// @brief Method SearchBegin, addr 0xb633354, size 0xa0, virtual true, abstract: false, final false
inline void SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor*  query) ;

/// @brief Method SearchBegin_Injected, addr 0xb6333f4, size 0x44, virtual false, abstract: false, final false
static inline void SearchBegin_Injected(::System::IntPtr  _unity_self, ::Unity::Hierarchy::HierarchySearchQueryDescriptor*  query) ;

/// [FreeFunction("HierarchyNodeTypeHandlerBaseBindings::SearchEnd", HasExplicitThis = true, IsThreadSafe = true)]
/// @brief Method SearchEnd, addr 0xb63351c, size 0x90, virtual true, abstract: false, final false
inline void SearchEnd() ;

/// @brief Method SearchEnd_Injected, addr 0xb6335ac, size 0x3c, virtual false, abstract: false, final false
static inline void SearchEnd_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("HierarchyNodeTypeHandlerBaseBindings::SearchMatch", HasExplicitThis = true, IsThreadSafe = true)]
/// @brief Method SearchMatch, addr 0xb633438, size 0xa0, virtual true, abstract: false, final false
inline bool SearchMatch(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method SearchMatch_Injected, addr 0xb6334d8, size 0x44, virtual false, abstract: false, final false
static inline bool SearchMatch_Injected(::System::IntPtr  _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// [RequiredByNativeCode]
/// @brief Method TryGetStaticNodeType, addr 0xb6339c8, size 0x178, virtual false, abstract: false, final false
static inline bool TryGetStaticNodeType(::System::Type*  handlerType, ::by_ref<int32_t>  nodeType) ;

constexpr ::Unity::Hierarchy::HierarchyCommandList* const& __cordl_internal_get_m_CommandList() const;

constexpr ::Unity::Hierarchy::HierarchyCommandList*& __cordl_internal_get_m_CommandList() ;

constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_CommandList(::Unity::Hierarchy::HierarchyCommandList*  value) ;

constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy*  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* getStaticF_s_NodeTypes() ;

static inline void setStaticF_s_NodeTypes(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyNodeTypeHandlerBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyNodeTypeHandlerBase(HierarchyNodeTypeHandlerBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyNodeTypeHandlerBase(HierarchyNodeTypeHandlerBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31973};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field m_Hierarchy, offset: 0x18, size: 0x8, def value: None
 ::Unity::Hierarchy::Hierarchy*  ___m_Hierarchy;

/// @brief Field m_CommandList, offset: 0x20, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyCommandList*  ___m_CommandList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, ___m_Hierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, ___m_CommandList) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase) == 0x28, "Size mismatch!");

} // namespace end def Unity::Hierarchy
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBase/BindingsMarshaller
class CORDL_TYPE HierarchyNodeTypeHandlerBase_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb63416c, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*  handler) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyNodeTypeHandlerBase_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyNodeTypeHandlerBase_BindingsMarshaller(HierarchyNodeTypeHandlerBase_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyNodeTypeHandlerBase_BindingsMarshaller(HierarchyNodeTypeHandlerBase_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31971};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def Unity::Hierarchy
