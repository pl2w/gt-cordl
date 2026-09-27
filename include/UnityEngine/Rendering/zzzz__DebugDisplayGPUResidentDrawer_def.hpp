#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplayGPUResidentDrawer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_Widget_NameAndTooltip_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplayGPUResidentDrawer)
namespace GlobalNamespace {
struct DebugUI_Flags;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer_SettingsPanel;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer_Strings;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass29_0;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass36_0;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass37_0;
}
namespace UnityEngine::Rendering {
struct DebugOccluderStats;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
namespace UnityEngine::Rendering {
struct InstanceCullerViewStats;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionEventStats;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0;
}
namespace UnityEngine::Rendering {
class Table_DebugUI_Row;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer_SettingsPanel;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer_Strings;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass29_0;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass36_0;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass37_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_Strings*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass36_0*);
MARK_REF_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass37_0*);
MARK_REF_T(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c*);
MARK_REF_T(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0*);
MARK_REF_T(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0*);
MARK_REF_T(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/SettingsPanel");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_Strings*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/Strings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/<>c__DisplayClass29_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass36_0*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/<>c__DisplayClass36_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass37_0*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/<>c__DisplayClass37_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/SettingsPanel/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass2_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass3_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass4_0");
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer
class CORDL_TYPE DebugDisplayGPUResidentDrawer : public ::System::Object {
public:
// Declarations
using SettingsPanel = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel;

using Strings = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_Strings;

using __c__DisplayClass29_0 = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0;

using __c__DisplayClass36_0 = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass36_0;

using __c__DisplayClass37_0 = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass37_0;

 __declspec(property(get=get_AreAnySettingsActive)) bool  AreAnySettingsActive;

 __declspec(property(get=get_IsLightingActive)) bool  IsLightingActive;

 __declspec(property(get=get_IsPostProcessingAllowed)) bool  IsPostProcessingAllowed;

 __declspec(property(get=get_displayBatcherStats, put=set_displayBatcherStats)) bool  displayBatcherStats;

/// @brief Field occluderContextStats, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_occluderContextStats, put=__cordl_internal_set_occluderContextStats)) bool  occluderContextStats;

/// @brief Field occluderDebugViewEnable, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_occluderDebugViewEnable, put=__cordl_internal_set_occluderDebugViewEnable)) bool  occluderDebugViewEnable;

/// @brief Field occluderDebugViewIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_occluderDebugViewIndex, put=__cordl_internal_set_occluderDebugViewIndex)) int32_t  occluderDebugViewIndex;

/// @brief Field occluderDebugViewRange, offset 0x14, size 0x8 
 __declspec(property(get=__cordl_internal_get_occluderDebugViewRange, put=__cordl_internal_set_occluderDebugViewRange)) ::UnityEngine::Vector2  occluderDebugViewRange;

 __declspec(property(get=get_occlusionTestOverlayCountVisible, put=set_occlusionTestOverlayCountVisible)) bool  occlusionTestOverlayCountVisible;

 __declspec(property(get=get_occlusionTestOverlayEnable, put=set_occlusionTestOverlayEnable)) bool  occlusionTestOverlayEnable;

 __declspec(property(get=get_overrideOcclusionTestToAlwaysPass, put=set_overrideOcclusionTestToAlwaysPass)) bool  overrideOcclusionTestToAlwaysPass;

/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr operator  ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr operator  ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

/// @brief Method AddInstanceCullerViewDataRow, addr 0xb1e3634, size 0x5ec, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Table_DebugUI_Row* AddInstanceCullerViewDataRow(int32_t  viewIndex) ;

/// @brief Method AddInstanceOcclusionPassDataRow, addr 0xb1e3ec8, size 0x7ac, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Table_DebugUI_Row* AddInstanceOcclusionPassDataRow(int32_t  eventIndex) ;

/// @brief Method AddOcclusionContextDataRow, addr 0xb1e467c, size 0x38c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Table_DebugUI_Row* AddOcclusionContextDataRow(int32_t  index) ;

/// @brief Method CulledInstancesString, addr 0xb1e3d84, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Object* CulledInstancesString(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceOcclusionEventStats>  stats) ;

/// @brief Method CulledPrimitivesString, addr 0xb1e3e5c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Object* CulledPrimitivesString(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceOcclusionEventStats>  stats) ;

/// @brief Method GetInstanceCullerViewCount, addr 0xb1e3574, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetInstanceCullerViewCount() ;

/// @brief Method GetInstanceCullerViewStats, addr 0xb1e32a8, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::InstanceCullerViewStats GetInstanceCullerViewStats(int32_t  viewIndex) ;

/// @brief Method GetInstanceOcclusionEventCount, addr 0xb1e35d4, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetInstanceOcclusionEventCount() ;

/// @brief Method GetInstanceOcclusionEventStats, addr 0xb1e3378, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::InstanceOcclusionEventStats GetInstanceOcclusionEventStats(int32_t  passIndex) ;

/// @brief Method GetOccluderStats, addr 0xb1e3458, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::DebugOccluderStats GetOccluderStats(int32_t  occluderIndex) ;

/// @brief Method GetOccluderViewInstanceID, addr 0xb1e3104, size 0xe4, virtual false, abstract: false, final false
inline bool GetOccluderViewInstanceID(::by_ref<int32_t>  viewInstanceID) ;

/// @brief Method GetOcclusionContextsCounts, addr 0xb1e3514, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetOcclusionContextsCounts() ;

static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* New_ctor() ;

/// @brief Method OccluderVersionString, addr 0xb1e3c28, size 0x78, virtual false, abstract: false, final false
static inline ::System::Object* OccluderVersionString(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceOcclusionEventStats>  stats) ;

/// @brief Method OcclusionTestString, addr 0xb1e3ca0, size 0x78, virtual false, abstract: false, final false
static inline ::System::Object* OcclusionTestString(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceOcclusionEventStats>  stats) ;

/// @brief Method TryGetScreenClearColor, addr 0xb1e4a40, size 0x8, virtual true, abstract: false, final true
inline bool TryGetScreenClearColor(::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel, addr 0xb1e4a48, size 0x58, virtual true, abstract: false, final true
inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel() ;

/// @brief Method VisibleInstancesString, addr 0xb1e3d18, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Object* VisibleInstancesString(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceOcclusionEventStats>  stats) ;

/// @brief Method VisiblePrimitivesString, addr 0xb1e3df0, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Object* VisiblePrimitivesString(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceOcclusionEventStats>  stats) ;

constexpr bool const& __cordl_internal_get_occluderContextStats() const;

constexpr bool& __cordl_internal_get_occluderContextStats() ;

constexpr bool const& __cordl_internal_get_occluderDebugViewEnable() const;

constexpr bool& __cordl_internal_get_occluderDebugViewEnable() ;

constexpr int32_t const& __cordl_internal_get_occluderDebugViewIndex() const;

constexpr int32_t& __cordl_internal_get_occluderDebugViewIndex() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_occluderDebugViewRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_occluderDebugViewRange() ;

constexpr void __cordl_internal_set_occluderContextStats(bool  value) ;

constexpr void __cordl_internal_set_occluderDebugViewEnable(bool  value) ;

constexpr void __cordl_internal_set_occluderDebugViewIndex(int32_t  value) ;

constexpr void __cordl_internal_set_occluderDebugViewRange(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0xb1e5aa8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AreAnySettingsActive, addr 0xb1e4a10, size 0x20, virtual true, abstract: false, final true
inline bool get_AreAnySettingsActive() ;

/// @brief Method get_IsLightingActive, addr 0xb1e4a38, size 0x8, virtual true, abstract: false, final true
inline bool get_IsLightingActive() ;

/// @brief Method get_IsPostProcessingAllowed, addr 0xb1e4a30, size 0x8, virtual true, abstract: false, final true
inline bool get_IsPostProcessingAllowed() ;

/// @brief Method get_displayBatcherStats, addr 0xb1e3060, size 0x20, virtual false, abstract: false, final false
inline bool get_displayBatcherStats() ;

/// @brief Method get_occlusionTestOverlayCountVisible, addr 0xb1e3228, size 0x20, virtual false, abstract: false, final false
inline bool get_occlusionTestOverlayCountVisible() ;

/// @brief Method get_occlusionTestOverlayEnable, addr 0xb1e31e8, size 0x20, virtual false, abstract: false, final false
inline bool get_occlusionTestOverlayEnable() ;

/// @brief Method get_overrideOcclusionTestToAlwaysPass, addr 0xb1e3268, size 0x20, virtual false, abstract: false, final false
inline bool get_overrideOcclusionTestToAlwaysPass() ;

/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

/// @brief Method set_displayBatcherStats, addr 0xb1e30e4, size 0x20, virtual false, abstract: false, final false
inline void set_displayBatcherStats(bool  value) ;

/// @brief Method set_occlusionTestOverlayCountVisible, addr 0xb1e3248, size 0x20, virtual false, abstract: false, final false
inline void set_occlusionTestOverlayCountVisible(bool  value) ;

/// @brief Method set_occlusionTestOverlayEnable, addr 0xb1e3208, size 0x20, virtual false, abstract: false, final false
inline void set_occlusionTestOverlayEnable(bool  value) ;

/// @brief Method set_overrideOcclusionTestToAlwaysPass, addr 0xb1e3288, size 0x20, virtual false, abstract: false, final false
inline void set_overrideOcclusionTestToAlwaysPass(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayGPUResidentDrawer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayGPUResidentDrawer(DebugDisplayGPUResidentDrawer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayGPUResidentDrawer(DebugDisplayGPUResidentDrawer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26523};

/// @brief Field k_FormatString offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FormatString{u"{0}"};

/// @brief Field k_MaxContextCount offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxContextCount{static_cast<int32_t>(0x10)};

/// @brief Field k_MaxOcclusionPassCount offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxOcclusionPassCount{static_cast<int32_t>(0x20)};

/// @brief Field k_MaxViewCount offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxViewCount{static_cast<int32_t>(0x20)};

/// @brief Field k_RefreshRate offset 0xffffffff size 0x4
static constexpr float_t  k_RefreshRate{static_cast<float_t>(0.2f)};

/// @brief Field occluderDebugViewEnable, offset: 0x10, size: 0x1, def value: None
 bool  ___occluderDebugViewEnable;

/// @brief Field occluderContextStats, offset: 0x11, size: 0x1, def value: None
 bool  ___occluderContextStats;

/// @brief Field occluderDebugViewRange, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___occluderDebugViewRange;

/// @brief Field occluderDebugViewIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___occluderDebugViewIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer, ___occluderDebugViewEnable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer, ___occluderContextStats) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer, ___occluderDebugViewRange) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer, ___occluderDebugViewIndex) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/<>c__DisplayClass37_0
class CORDL_TYPE DebugDisplayGPUResidentDrawer___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <AddOcclusionContextDataRow>b__0, addr 0xb1e81a8, size 0x1c, virtual false, abstract: false, final false
inline bool _AddOcclusionContextDataRow_b__0() ;

/// @brief Method <AddOcclusionContextDataRow>b__1, addr 0xb1e81c4, size 0x30, virtual false, abstract: false, final false
inline ::System::Object* _AddOcclusionContextDataRow_b__1() ;

/// @brief Method <AddOcclusionContextDataRow>b__2, addr 0xb1e81f4, size 0x30, virtual false, abstract: false, final false
inline ::System::Object* _AddOcclusionContextDataRow_b__2() ;

/// @brief Method <AddOcclusionContextDataRow>b__3, addr 0xb1e8224, size 0x98, virtual false, abstract: false, final false
inline ::System::Object* _AddOcclusionContextDataRow_b__3() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0xb1e4a08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayGPUResidentDrawer___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass37_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayGPUResidentDrawer___c__DisplayClass37_0(DebugDisplayGPUResidentDrawer___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass37_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayGPUResidentDrawer___c__DisplayClass37_0(DebugDisplayGPUResidentDrawer___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26522};

/// @brief Field index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass37_0, ___index) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass37_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/<>c__DisplayClass36_0
class CORDL_TYPE DebugDisplayGPUResidentDrawer___c__DisplayClass36_0 : public ::System::Object {
public:
// Declarations
/// @brief Field eventIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventIndex, put=__cordl_internal_set_eventIndex)) int32_t  eventIndex;

static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass36_0* New_ctor() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__0, addr 0xb1e7f00, size 0x1c, virtual false, abstract: false, final false
inline bool _AddInstanceOcclusionPassDataRow_b__0() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__1, addr 0xb1e7f1c, size 0x3c, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__1() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__2, addr 0xb1e7f58, size 0x98, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__2() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__3, addr 0xb1e7ff0, size 0x28, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__3() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__4, addr 0xb1e8018, size 0x84, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__4() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__5, addr 0xb1e809c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__5() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__6, addr 0xb1e8108, size 0x28, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__6() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__7, addr 0xb1e8130, size 0x28, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__7() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__8, addr 0xb1e8158, size 0x28, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__8() ;

/// @brief Method <AddInstanceOcclusionPassDataRow>b__9, addr 0xb1e8180, size 0x28, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__9() ;

constexpr int32_t const& __cordl_internal_get_eventIndex() const;

constexpr int32_t& __cordl_internal_get_eventIndex() ;

constexpr void __cordl_internal_set_eventIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xb1e4674, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayGPUResidentDrawer___c__DisplayClass36_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass36_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayGPUResidentDrawer___c__DisplayClass36_0(DebugDisplayGPUResidentDrawer___c__DisplayClass36_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass36_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayGPUResidentDrawer___c__DisplayClass36_0(DebugDisplayGPUResidentDrawer___c__DisplayClass36_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26521};

/// @brief Field eventIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___eventIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass36_0, ___eventIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass36_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/<>c__DisplayClass29_0
class CORDL_TYPE DebugDisplayGPUResidentDrawer___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field viewIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_viewIndex, put=__cordl_internal_set_viewIndex)) int32_t  viewIndex;

static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0* New_ctor() ;

/// @brief Method <AddInstanceCullerViewDataRow>b__0, addr 0xb1e7c80, size 0x1c, virtual false, abstract: false, final false
inline bool _AddInstanceCullerViewDataRow_b__0() ;

/// @brief Method <AddInstanceCullerViewDataRow>b__1, addr 0xb1e7c9c, size 0x68, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullerViewDataRow_b__1() ;

/// @brief Method <AddInstanceCullerViewDataRow>b__2, addr 0xb1e7d04, size 0x3c, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullerViewDataRow_b__2() ;

/// @brief Method <AddInstanceCullerViewDataRow>b__3, addr 0xb1e7d40, size 0x3c, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullerViewDataRow_b__3() ;

/// @brief Method <AddInstanceCullerViewDataRow>b__4, addr 0xb1e7d7c, size 0xa4, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullerViewDataRow_b__4() ;

/// @brief Method <AddInstanceCullerViewDataRow>b__5, addr 0xb1e7e20, size 0xa4, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullerViewDataRow_b__5() ;

/// @brief Method <AddInstanceCullerViewDataRow>b__6, addr 0xb1e7ec4, size 0x3c, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullerViewDataRow_b__6() ;

constexpr int32_t const& __cordl_internal_get_viewIndex() const;

constexpr int32_t& __cordl_internal_get_viewIndex() ;

constexpr void __cordl_internal_set_viewIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xb1e3c20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayGPUResidentDrawer___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass29_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayGPUResidentDrawer___c__DisplayClass29_0(DebugDisplayGPUResidentDrawer___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass29_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayGPUResidentDrawer___c__DisplayClass29_0(DebugDisplayGPUResidentDrawer___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26520};

/// @brief Field viewIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___viewIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0, ___viewIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [DisplayInfo(name = "Rendering", order = 5)]
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel
class CORDL_TYPE DebugDisplayGPUResidentDrawer_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel {
public:
// Declarations
using __c = ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c;

using __c__DisplayClass2_0 = ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0;

using __c__DisplayClass3_0 = ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0;

using __c__DisplayClass4_0 = ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0;

 __declspec(property(get=get_Flags)) ::GlobalNamespace::DebugUI_Flags  Flags;

/// @brief Method AddInstanceCullingStatsWidget, addr 0xb1e62b0, size 0xcd8, virtual false, abstract: false, final false
inline void AddInstanceCullingStatsWidget(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  data) ;

/// @brief Method AddOcclusionContextStatsWidget, addr 0xb1e5ec8, size 0x3e8, virtual false, abstract: false, final false
inline void AddOcclusionContextStatsWidget(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  data) ;

static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel* New_ctor(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  data) ;

/// @brief Method .ctor, addr 0xb1e4aa0, size 0x1008, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  data) ;

/// @brief Method get_Flags, addr 0xb1e5eb8, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::DebugUI_Flags get_Flags() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayGPUResidentDrawer_SettingsPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer_SettingsPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayGPUResidentDrawer_SettingsPanel(DebugDisplayGPUResidentDrawer_SettingsPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer_SettingsPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayGPUResidentDrawer_SettingsPanel(DebugDisplayGPUResidentDrawer_SettingsPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26519};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass4_0
class CORDL_TYPE SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  data;

static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <AddOcclusionContextStatsWidget>b__0, addr 0xb1e7c60, size 0x20, virtual false, abstract: false, final false
inline bool _AddOcclusionContextStatsWidget_b__0() ;

constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* const& __cordl_internal_get_data() const;

constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  value) ;

/// @brief Method .ctor, addr 0xb1e6f90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26518};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass3_0
class CORDL_TYPE SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  data;

static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__0, addr 0xb1e7bc4, size 0x34, virtual false, abstract: false, final false
inline bool _AddInstanceCullingStatsWidget_b__0() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__8, addr 0xb1e7bf8, size 0x34, virtual false, abstract: false, final false
inline bool _AddInstanceCullingStatsWidget_b__8() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__9, addr 0xb1e7c2c, size 0x34, virtual false, abstract: false, final false
inline bool _AddInstanceCullingStatsWidget_b__9() ;

constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* const& __cordl_internal_get_data() const;

constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  value) ;

/// @brief Method .ctor, addr 0xb1e6f88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26517};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass3_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass2_0
class CORDL_TYPE SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  data;

static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0* New_ctor() ;

constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* const& __cordl_internal_get_data() const;

constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  value) ;

/// @brief Method <.ctor>b__10, addr 0xb1e7a2c, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__10(bool  value) ;

/// @brief Method <.ctor>b__11, addr 0xb1e7a48, size 0x18, virtual false, abstract: false, final false
inline bool __ctor_b__11() ;

/// @brief Method <.ctor>b__12, addr 0xb1e7a60, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__12(bool  value) ;

/// @brief Method <.ctor>b__13, addr 0xb1e7a7c, size 0x18, virtual false, abstract: false, final false
inline int32_t __ctor_b__13() ;

/// @brief Method <.ctor>b__14, addr 0xb1e7a94, size 0x18, virtual false, abstract: false, final false
inline void __ctor_b__14(int32_t  value) ;

/// @brief Method <.ctor>b__15, addr 0xb1e7aac, size 0x20, virtual false, abstract: false, final false
inline bool __ctor_b__15() ;

/// @brief Method <.ctor>b__18, addr 0xb1e7acc, size 0x18, virtual false, abstract: false, final false
inline float_t __ctor_b__18() ;

/// @brief Method <.ctor>b__19, addr 0xb1e7ae4, size 0x18, virtual false, abstract: false, final false
inline void __ctor_b__19(float_t  value) ;

/// @brief Method <.ctor>b__20, addr 0xb1e7afc, size 0x20, virtual false, abstract: false, final false
inline bool __ctor_b__20() ;

/// @brief Method <.ctor>b__21, addr 0xb1e7b1c, size 0x18, virtual false, abstract: false, final false
inline float_t __ctor_b__21() ;

/// @brief Method <.ctor>b__22, addr 0xb1e7b34, size 0x18, virtual false, abstract: false, final false
inline void __ctor_b__22(float_t  value) ;

/// @brief Method <.ctor>b__23, addr 0xb1e7b4c, size 0x20, virtual false, abstract: false, final false
inline bool __ctor_b__23() ;

/// @brief Method <.ctor>b__24, addr 0xb1e7b6c, size 0x2c, virtual false, abstract: false, final false
inline bool __ctor_b__24() ;

/// @brief Method <.ctor>b__25, addr 0xb1e7b98, size 0x2c, virtual false, abstract: false, final false
inline void __ctor_b__25(bool  value) ;

/// @brief Method <.ctor>b__3, addr 0xb1e790c, size 0x2c, virtual false, abstract: false, final false
inline bool __ctor_b__3() ;

/// @brief Method <.ctor>b__4, addr 0xb1e7938, size 0x2c, virtual false, abstract: false, final false
inline void __ctor_b__4(bool  value) ;

/// @brief Method <.ctor>b__5, addr 0xb1e7964, size 0x2c, virtual false, abstract: false, final false
inline bool __ctor_b__5() ;

/// @brief Method <.ctor>b__6, addr 0xb1e7990, size 0x2c, virtual false, abstract: false, final false
inline void __ctor_b__6(bool  value) ;

/// @brief Method <.ctor>b__7, addr 0xb1e79bc, size 0x2c, virtual false, abstract: false, final false
inline bool __ctor_b__7() ;

/// @brief Method <.ctor>b__8, addr 0xb1e79e8, size 0x2c, virtual false, abstract: false, final false
inline void __ctor_b__8(bool  value) ;

/// @brief Method <.ctor>b__9, addr 0xb1e7a14, size 0x18, virtual false, abstract: false, final false
inline bool __ctor_b__9() ;

/// @brief Method .ctor, addr 0xb1e5ec0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26516};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel/<>c
class CORDL_TYPE SettingsPanel_DebugDisplayGPUResidentDrawer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_1<::StringW>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Func_1<bool>*  __9__2_1;

/// @brief Field <>9__2_16, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_16, put=setStaticF___9__2_16)) ::System::Func_1<int32_t>*  __9__2_16;

/// @brief Field <>9__2_17, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_17, put=setStaticF___9__2_17)) ::System::Func_1<int32_t>*  __9__2_17;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Func_1<bool>*  __9__2_2;

/// @brief Field <>9__2_26, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_26, put=setStaticF___9__2_26)) ::System::Func_1<bool>*  __9__2_26;

/// @brief Field <>9__3_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_1, put=setStaticF___9__3_1)) ::System::Func_1<::System::Object*>*  __9__3_1;

/// @brief Field <>9__3_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_2, put=setStaticF___9__3_2)) ::System::Func_1<::System::Object*>*  __9__3_2;

/// @brief Field <>9__3_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_3, put=setStaticF___9__3_3)) ::System::Func_1<::System::Object*>*  __9__3_3;

/// @brief Field <>9__3_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_4, put=setStaticF___9__3_4)) ::System::Func_1<::System::Object*>*  __9__3_4;

/// @brief Field <>9__3_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_5, put=setStaticF___9__3_5)) ::System::Func_1<::System::Object*>*  __9__3_5;

/// @brief Field <>9__3_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_6, put=setStaticF___9__3_6)) ::System::Func_1<::System::Object*>*  __9__3_6;

/// @brief Field <>9__3_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_7, put=setStaticF___9__3_7)) ::System::Func_1<::System::Object*>*  __9__3_7;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Func_1<::System::Object*>*  __9__4_1;

static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c* New_ctor() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__3_1, addr 0xb1e75ac, size 0x2c, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullingStatsWidget_b__3_1() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__3_2, addr 0xb1e75d8, size 0x80, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullingStatsWidget_b__3_2() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__3_3, addr 0xb1e7658, size 0x80, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullingStatsWidget_b__3_3() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__3_4, addr 0xb1e76d8, size 0x84, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullingStatsWidget_b__3_4() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__3_5, addr 0xb1e775c, size 0x80, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullingStatsWidget_b__3_5() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__3_6, addr 0xb1e77dc, size 0x80, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullingStatsWidget_b__3_6() ;

/// @brief Method <AddInstanceCullingStatsWidget>b__3_7, addr 0xb1e785c, size 0x84, virtual false, abstract: false, final false
inline ::System::Object* _AddInstanceCullingStatsWidget_b__3_7() ;

/// @brief Method <AddOcclusionContextStatsWidget>b__4_1, addr 0xb1e78e0, size 0x2c, virtual false, abstract: false, final false
inline ::System::Object* _AddOcclusionContextStatsWidget_b__4_1() ;

/// @brief Method <.ctor>b__2_0, addr 0xb1e7008, size 0x50, virtual false, abstract: false, final false
inline ::StringW __ctor_b__2_0() ;

/// @brief Method <.ctor>b__2_1, addr 0xb1e7400, size 0x50, virtual false, abstract: false, final false
inline bool __ctor_b__2_1() ;

/// @brief Method <.ctor>b__2_16, addr 0xb1e74f0, size 0x8, virtual false, abstract: false, final false
inline int32_t __ctor_b__2_16() ;

/// @brief Method <.ctor>b__2_17, addr 0xb1e74f8, size 0x64, virtual false, abstract: false, final false
inline int32_t __ctor_b__2_17() ;

/// @brief Method <.ctor>b__2_2, addr 0xb1e74a0, size 0x50, virtual false, abstract: false, final false
inline bool __ctor_b__2_2() ;

/// @brief Method <.ctor>b__2_26, addr 0xb1e755c, size 0x50, virtual false, abstract: false, final false
inline bool __ctor_b__2_26() ;

/// @brief Method .ctor, addr 0xb1e7000, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c* getStaticF___9() ;

static inline ::System::Func_1<::StringW>* getStaticF___9__2_0() ;

static inline ::System::Func_1<bool>* getStaticF___9__2_1() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__2_16() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__2_17() ;

static inline ::System::Func_1<bool>* getStaticF___9__2_2() ;

static inline ::System::Func_1<bool>* getStaticF___9__2_26() ;

static inline ::System::Func_1<::System::Object*>* getStaticF___9__3_1() ;

static inline ::System::Func_1<::System::Object*>* getStaticF___9__3_2() ;

static inline ::System::Func_1<::System::Object*>* getStaticF___9__3_3() ;

static inline ::System::Func_1<::System::Object*>* getStaticF___9__3_4() ;

static inline ::System::Func_1<::System::Object*>* getStaticF___9__3_5() ;

static inline ::System::Func_1<::System::Object*>* getStaticF___9__3_6() ;

static inline ::System::Func_1<::System::Object*>* getStaticF___9__3_7() ;

static inline ::System::Func_1<::System::Object*>* getStaticF___9__4_1() ;

static inline void setStaticF___9(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c*  value) ;

static inline void setStaticF___9__2_0(::System::Func_1<::StringW>*  value) ;

static inline void setStaticF___9__2_1(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__2_16(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__2_17(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__2_2(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__2_26(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__3_1(::System::Func_1<::System::Object*>*  value) ;

static inline void setStaticF___9__3_2(::System::Func_1<::System::Object*>*  value) ;

static inline void setStaticF___9__3_3(::System::Func_1<::System::Object*>*  value) ;

static inline void setStaticF___9__3_4(::System::Func_1<::System::Object*>*  value) ;

static inline void setStaticF___9__3_5(::System::Func_1<::System::Object*>*  value) ;

static inline void setStaticF___9__3_6(::System::Func_1<::System::Object*>*  value) ;

static inline void setStaticF___9__3_7(::System::Func_1<::System::Object*>*  value) ;

static inline void setStaticF___9__4_1(::System::Func_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPanel_DebugDisplayGPUResidentDrawer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPanel_DebugDisplayGPUResidentDrawer___c(SettingsPanel_DebugDisplayGPUResidentDrawer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPanel_DebugDisplayGPUResidentDrawer___c(SettingsPanel_DebugDisplayGPUResidentDrawer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26515};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Widget::NameAndTooltip
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/Strings
class CORDL_TYPE DebugDisplayGPUResidentDrawer_Strings : public ::System::Object {
public:
// Declarations
/// @brief Field displayBatcherStats, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_displayBatcherStats, put=setStaticF_displayBatcherStats)) ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  displayBatcherStats;

/// @brief Field occluderContextStats, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_occluderContextStats, put=setStaticF_occluderContextStats)) ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  occluderContextStats;

/// @brief Field occluderDebugViewEnable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_occluderDebugViewEnable, put=setStaticF_occluderDebugViewEnable)) ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  occluderDebugViewEnable;

/// @brief Field occluderDebugViewIndex, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_occluderDebugViewIndex, put=setStaticF_occluderDebugViewIndex)) ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  occluderDebugViewIndex;

/// @brief Field occluderDebugViewRangeMax, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_occluderDebugViewRangeMax, put=setStaticF_occluderDebugViewRangeMax)) ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  occluderDebugViewRangeMax;

/// @brief Field occluderDebugViewRangeMin, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_occluderDebugViewRangeMin, put=setStaticF_occluderDebugViewRangeMin)) ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  occluderDebugViewRangeMin;

/// @brief Field occlusionTestOverlayCountVisible, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_occlusionTestOverlayCountVisible, put=setStaticF_occlusionTestOverlayCountVisible)) ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  occlusionTestOverlayCountVisible;

/// @brief Field occlusionTestOverlayEnable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_occlusionTestOverlayEnable, put=setStaticF_occlusionTestOverlayEnable)) ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  occlusionTestOverlayEnable;

/// @brief Field overrideOcclusionTestToAlwaysPass, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_overrideOcclusionTestToAlwaysPass, put=setStaticF_overrideOcclusionTestToAlwaysPass)) ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  overrideOcclusionTestToAlwaysPass;

static inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip getStaticF_displayBatcherStats() ;

static inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip getStaticF_occluderContextStats() ;

static inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip getStaticF_occluderDebugViewEnable() ;

static inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip getStaticF_occluderDebugViewIndex() ;

static inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip getStaticF_occluderDebugViewRangeMax() ;

static inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip getStaticF_occluderDebugViewRangeMin() ;

static inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip getStaticF_occlusionTestOverlayCountVisible() ;

static inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip getStaticF_occlusionTestOverlayEnable() ;

static inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip getStaticF_overrideOcclusionTestToAlwaysPass() ;

static inline void setStaticF_displayBatcherStats(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_occluderContextStats(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_occluderDebugViewEnable(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_occluderDebugViewIndex(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_occluderDebugViewRangeMax(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_occluderDebugViewRangeMin(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_occlusionTestOverlayCountVisible(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_occlusionTestOverlayEnable(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_overrideOcclusionTestToAlwaysPass(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayGPUResidentDrawer_Strings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer_Strings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayGPUResidentDrawer_Strings(DebugDisplayGPUResidentDrawer_Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer_Strings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayGPUResidentDrawer_Strings(DebugDisplayGPUResidentDrawer_Strings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26514};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_Strings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
