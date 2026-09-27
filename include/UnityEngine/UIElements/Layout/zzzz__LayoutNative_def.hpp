#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNative_LayoutLogEventType_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutNative)
namespace GlobalNamespace {
struct LayoutNative_LayoutLogEventType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::UIElements::Layout {
class LayoutNative_LayoutLogData;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
class LayoutNative;
}
namespace UnityEngine::UIElements::Layout {
class LayoutNative_LayoutLogData;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::Layout::LayoutNative*);
MARK_REF_T(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutNative*, "UnityEngine.UIElements.Layout", "LayoutNative");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*, "UnityEngine.UIElements.Layout", "LayoutNative/LayoutLogData");
// [NativeHeader("Modules/UIElements/Core/Layout/Native/LayoutNative.h")]
// Dependencies System.Object
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutNative
class CORDL_TYPE LayoutNative : public ::System::Object {
public:
// Declarations
using LayoutLogEventType = ::GlobalNamespace::LayoutNative_LayoutLogEventType;

using LayoutLogData = ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData;

/// @brief Field onLayoutLog, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onLayoutLog, put=setStaticF_onLayoutLog)) ::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>*  onLayoutLog;

/// [NativeMethod(IsThreadSafe = false)]
/// @brief Method CalculateLayout, addr 0xb802240, size 0x74, virtual false, abstract: false, final false
static inline void CalculateLayout(::System::IntPtr  node, float_t  parentWidth, float_t  parentHeight, int32_t  parentDirection, ::System::IntPtr  state, ::System::IntPtr  exceptionGCHandle) ;

/// [RequiredByNativeCode]
/// @brief Method LayoutLog_Internal, addr 0xb8022b4, size 0xd8, virtual false, abstract: false, final false
static inline void LayoutLog_Internal(::System::IntPtr  nodePtr, ::GlobalNamespace::LayoutNative_LayoutLogEventType  type, ::StringW  message) ;

static inline ::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>* getStaticF_onLayoutLog() ;

static inline void setStaticF_onLayoutLog(::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayoutNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayoutNative", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayoutNative(LayoutNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayoutNative", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayoutNative(LayoutNative const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8677};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutNative) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::Layout
// Dependencies System.Object, UnityEngine.UIElements.Layout.LayoutNative::LayoutLogEventType, UnityEngine.UIElements.Layout.LayoutNode
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutNative/LayoutLogData
class CORDL_TYPE LayoutNative_LayoutLogData : public ::System::Object {
public:
// Declarations
/// @brief Field eventType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventType, put=__cordl_internal_set_eventType)) ::GlobalNamespace::LayoutNative_LayoutLogEventType  eventType;

/// @brief Field message, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Field node, offset 0x10, size 0x30 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::UnityEngine::UIElements::Layout::LayoutNode  node;

static inline ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData* New_ctor() ;

constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType const& __cordl_internal_get_eventType() const;

constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType& __cordl_internal_get_eventType() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr ::UnityEngine::UIElements::Layout::LayoutNode const& __cordl_internal_get_node() const;

constexpr ::UnityEngine::UIElements::Layout::LayoutNode& __cordl_internal_get_node() ;

constexpr void __cordl_internal_set_eventType(::GlobalNamespace::LayoutNative_LayoutLogEventType  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

constexpr void __cordl_internal_set_node(::UnityEngine::UIElements::Layout::LayoutNode  value) ;

/// @brief Method .ctor, addr 0xb80238c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayoutNative_LayoutLogData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayoutNative_LayoutLogData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayoutNative_LayoutLogData(LayoutNative_LayoutLogData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayoutNative_LayoutLogData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayoutNative_LayoutLogData(LayoutNative_LayoutLogData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8676};

/// @brief Field node, offset: 0x10, size: 0x30, def value: None
 ::UnityEngine::UIElements::Layout::LayoutNode  ___node;

/// @brief Field eventType, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::LayoutNative_LayoutLogEventType  ___eventType;

/// @brief Field message, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData, ___node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData, ___eventType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData, ___message) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::Layout
