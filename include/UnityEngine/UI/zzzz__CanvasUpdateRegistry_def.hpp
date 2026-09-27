#pragma once
// IWYU pragma private; include "UnityEngine/UI/CanvasUpdateRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasUpdateRegistry)
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine::UI::Collections {
template<typename T>
class IndexedSet_1;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
class CanvasUpdateRegistry;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::CanvasUpdateRegistry*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::CanvasUpdateRegistry*, "UnityEngine.UI", "CanvasUpdateRegistry");
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.CanvasUpdateRegistry
class CORDL_TYPE CanvasUpdateRegistry : public ::System::Object {
public:
// Declarations
/// @brief Field m_CanvasUpdateProfilerStrings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CanvasUpdateProfilerStrings, put=__cordl_internal_set_m_CanvasUpdateProfilerStrings)) ::ArrayW<::StringW>  m_CanvasUpdateProfilerStrings;

/// @brief Field m_GraphicRebuildQueue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GraphicRebuildQueue, put=__cordl_internal_set_m_GraphicRebuildQueue)) ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*  m_GraphicRebuildQueue;

/// @brief Field m_LayoutRebuildQueue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LayoutRebuildQueue, put=__cordl_internal_set_m_LayoutRebuildQueue)) ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*  m_LayoutRebuildQueue;

/// @brief Field m_PerformingGraphicUpdate, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PerformingGraphicUpdate, put=__cordl_internal_set_m_PerformingGraphicUpdate)) bool  m_PerformingGraphicUpdate;

/// @brief Field m_PerformingLayoutUpdate, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PerformingLayoutUpdate, put=__cordl_internal_set_m_PerformingLayoutUpdate)) bool  m_PerformingLayoutUpdate;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityEngine::UI::CanvasUpdateRegistry*  s_Instance;

/// @brief Field s_SortLayoutFunction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SortLayoutFunction, put=setStaticF_s_SortLayoutFunction)) ::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>*  s_SortLayoutFunction;

/// @brief Method CleanInvalidItems, addr 0xb6fe560, size 0x2d0, virtual false, abstract: false, final false
inline void CleanInvalidItems() ;

/// @brief Method DisableCanvasElementForRebuild, addr 0xb6ff794, size 0x70, virtual false, abstract: false, final false
static inline void DisableCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method InternalDisableCanvasElementForGraphicRebuild, addr 0xb6ff968, size 0x164, virtual false, abstract: false, final false
inline void InternalDisableCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method InternalDisableCanvasElementForLayoutRebuild, addr 0xb6ff804, size 0x164, virtual false, abstract: false, final false
inline void InternalDisableCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method InternalRegisterCanvasElementForGraphicRebuild, addr 0xb6ff32c, size 0xd0, virtual false, abstract: false, final false
inline bool InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method InternalRegisterCanvasElementForLayoutRebuild, addr 0xb6ff1d4, size 0x98, virtual false, abstract: false, final false
inline bool InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method InternalUnRegisterCanvasElementForGraphicRebuild, addr 0xb6ff630, size 0x164, virtual false, abstract: false, final false
inline void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method InternalUnRegisterCanvasElementForLayoutRebuild, addr 0xb6ff4cc, size 0x164, virtual false, abstract: false, final false
inline void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method IsRebuildingGraphics, addr 0xb6ffb28, size 0x5c, virtual false, abstract: false, final false
static inline bool IsRebuildingGraphics() ;

/// @brief Method IsRebuildingLayout, addr 0xb6ffacc, size 0x5c, virtual false, abstract: false, final false
static inline bool IsRebuildingLayout() ;

static inline ::UnityEngine::UI::CanvasUpdateRegistry* New_ctor() ;

/// @brief Method ObjectValidForUpdate, addr 0xb6fe490, size 0xd0, virtual false, abstract: false, final false
inline bool ObjectValidForUpdate(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method ParentCount, addr 0xb6fef60, size 0xbc, virtual false, abstract: false, final false
static inline int32_t ParentCount(::UnityEngine::Transform*  child) ;

/// @brief Method PerformUpdate, addr 0xb6fe830, size 0x5a0, virtual false, abstract: false, final false
inline void PerformUpdate() ;

/// @brief Method RegisterCanvasElementForGraphicRebuild, addr 0xb6ff2cc, size 0x60, virtual false, abstract: false, final false
static inline void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method RegisterCanvasElementForLayoutRebuild, addr 0xb6ff174, size 0x60, virtual false, abstract: false, final false
static inline void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method SortLayoutList, addr 0xb6ff01c, size 0x158, virtual false, abstract: false, final false
static inline int32_t SortLayoutList(::UnityEngine::UI::ICanvasElement*  x, ::UnityEngine::UI::ICanvasElement*  y) ;

/// @brief Method TryRegisterCanvasElementForGraphicRebuild, addr 0xb6ff3fc, size 0x60, virtual false, abstract: false, final false
static inline bool TryRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method TryRegisterCanvasElementForLayoutRebuild, addr 0xb6ff26c, size 0x60, virtual false, abstract: false, final false
static inline bool TryRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

/// @brief Method UnRegisterCanvasElementForRebuild, addr 0xb6ff45c, size 0x70, virtual false, abstract: false, final false
static inline void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement*  element) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_CanvasUpdateProfilerStrings() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_CanvasUpdateProfilerStrings() ;

constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* const& __cordl_internal_get_m_GraphicRebuildQueue() const;

constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*& __cordl_internal_get_m_GraphicRebuildQueue() ;

constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* const& __cordl_internal_get_m_LayoutRebuildQueue() const;

constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*& __cordl_internal_get_m_LayoutRebuildQueue() ;

constexpr bool const& __cordl_internal_get_m_PerformingGraphicUpdate() const;

constexpr bool& __cordl_internal_get_m_PerformingGraphicUpdate() ;

constexpr bool const& __cordl_internal_get_m_PerformingLayoutUpdate() const;

constexpr bool& __cordl_internal_get_m_PerformingLayoutUpdate() ;

constexpr void __cordl_internal_set_m_CanvasUpdateProfilerStrings(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_m_GraphicRebuildQueue(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*  value) ;

constexpr void __cordl_internal_set_m_LayoutRebuildQueue(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*  value) ;

constexpr void __cordl_internal_set_m_PerformingGraphicUpdate(bool  value) ;

constexpr void __cordl_internal_set_m_PerformingLayoutUpdate(bool  value) ;

/// @brief Method .ctor, addr 0xb6fe1a0, size 0x240, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UI::CanvasUpdateRegistry* getStaticF_s_Instance() ;

static inline ::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>* getStaticF_s_SortLayoutFunction() ;

/// @brief Method get_instance, addr 0xb6fe3e0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::UI::CanvasUpdateRegistry* get_instance() ;

static inline void setStaticF_s_Instance(::UnityEngine::UI::CanvasUpdateRegistry*  value) ;

static inline void setStaticF_s_SortLayoutFunction(::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasUpdateRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasUpdateRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasUpdateRegistry(CanvasUpdateRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasUpdateRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasUpdateRegistry(CanvasUpdateRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26000};

/// @brief Field m_CullingUpdateProfilerString offset 0xffffffff size 0x8
static constexpr ::ConstString  m_CullingUpdateProfilerString{u"ClipperRegistry.Cull"};

/// @brief Field m_PerformingLayoutUpdate, offset: 0x10, size: 0x1, def value: None
 bool  ___m_PerformingLayoutUpdate;

/// @brief Field m_PerformingGraphicUpdate, offset: 0x11, size: 0x1, def value: None
 bool  ___m_PerformingGraphicUpdate;

/// @brief Field m_CanvasUpdateProfilerStrings, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_CanvasUpdateProfilerStrings;

/// @brief Field m_LayoutRebuildQueue, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*  ___m_LayoutRebuildQueue;

/// @brief Field m_GraphicRebuildQueue, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*  ___m_GraphicRebuildQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_PerformingLayoutUpdate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_PerformingGraphicUpdate) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_CanvasUpdateProfilerStrings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_LayoutRebuildQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_GraphicRebuildQueue) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::CanvasUpdateRegistry) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UI
