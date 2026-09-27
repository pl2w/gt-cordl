#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBase_ConstructorScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HierarchyNodeTypeHandlerBase_ConstructorScope)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Hierarchy {
class HierarchyCommandList;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
// Forward declare root types
namespace GlobalNamespace {
struct HierarchyNodeTypeHandlerBase_ConstructorScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBase/ConstructorScope");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBase/ConstructorScope
#pragma pack(push, 0)
struct CORDL_TYPE HierarchyNodeTypeHandlerBase_ConstructorScope {
public:
// Declarations
/// @brief Field m_CommandList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_CommandList, put=setStaticF_m_CommandList)) ::Unity::Hierarchy::HierarchyCommandList*  m_CommandList;

/// @brief Field m_Hierarchy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Hierarchy, put=setStaticF_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy*  m_Hierarchy;

/// @brief Field m_Ptr, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Ptr, put=setStaticF_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb63428c, size 0xcc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb6338e8, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  nativePtr, ::Unity::Hierarchy::Hierarchy*  hierarchy, ::Unity::Hierarchy::HierarchyCommandList*  cmdList) ;

static inline ::Unity::Hierarchy::HierarchyCommandList* getStaticF_m_CommandList() ;

static inline ::Unity::Hierarchy::Hierarchy* getStaticF_m_Hierarchy() ;

static inline ::System::IntPtr getStaticF_m_Ptr() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_m_CommandList(::Unity::Hierarchy::HierarchyCommandList*  value) ;

static inline void setStaticF_m_Hierarchy(::Unity::Hierarchy::Hierarchy*  value) ;

static inline void setStaticF_m_Ptr(::System::IntPtr  value) ;

/// @brief Method set_CommandList, addr 0xb63422c, size 0x60, virtual false, abstract: false, final false
static inline void set_CommandList(::Unity::Hierarchy::HierarchyCommandList*  value) ;

/// @brief Method set_Hierarchy, addr 0xb6341cc, size 0x60, virtual false, abstract: false, final false
static inline void set_Hierarchy(::Unity::Hierarchy::Hierarchy*  value) ;

/// @brief Method set_Ptr, addr 0xb634180, size 0x4c, virtual false, abstract: false, final false
static inline void set_Ptr(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyNodeTypeHandlerBase_ConstructorScope() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31972};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HierarchyNodeTypeHandlerBase_ConstructorScope) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
