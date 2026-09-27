#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalCameraHistory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraHistory_Item_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalCameraHistory)
namespace GlobalNamespace {
struct UniversalCameraHistory_Item;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
template<typename T>
class UniversalCameraHistory_TypeId_1;
}
namespace UnityEngine::Rendering {
class BufferedRTHandleSystem;
}
namespace UnityEngine::Rendering {
class ICameraHistoryReadAccess_HistoryRequestDelegate;
}
namespace UnityEngine::Rendering {
class ICameraHistoryReadAccess;
}
namespace UnityEngine::Rendering {
class ICameraHistoryWriteAccess;
}
namespace UnityEngine::Rendering {
class IPerFrameHistoryAccessTracker;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalCameraHistory;
}
namespace UnityEngine::Rendering::Universal {
template<typename T>
class UniversalCameraHistory_TypeId_1;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalCameraHistory*);
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalCameraHistory*, "UnityEngine.Rendering.Universal", "UniversalCameraHistory");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1, "UnityEngine.Rendering.Universal", "UniversalCameraHistory/TypeId`1");
// Dependencies System.Object, UnityEngine.Rendering.ContextItem, UnityEngine.Rendering.Universal.UniversalCameraHistory::Item
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalCameraHistory
class CORDL_TYPE UniversalCameraHistory : public ::System::Object {
public:
// Declarations
using Item = ::GlobalNamespace::UniversalCameraHistory_Item;

template<typename T>
using TypeId_1 = ::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>;

/// @brief Field OnGatherHistoryRequests, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGatherHistoryRequests, put=__cordl_internal_set_OnGatherHistoryRequests)) ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*  OnGatherHistoryRequests;

/// @brief Field m_HistoryTextures, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HistoryTextures, put=__cordl_internal_set_m_HistoryTextures)) ::UnityEngine::Rendering::BufferedRTHandleSystem*  m_HistoryTextures;

/// @brief Field m_Items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Items, put=__cordl_internal_set_m_Items)) ::ArrayW<::GlobalNamespace::UniversalCameraHistory_Item>  m_Items;

/// @brief Field m_Version, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) int32_t  m_Version;

/// @brief Field s_TypeCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TypeCount, put=setStaticF_s_TypeCount)) uint32_t  s_TypeCount;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::ICameraHistoryReadAccess"
constexpr operator  ::UnityEngine::Rendering::ICameraHistoryReadAccess*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::ICameraHistoryWriteAccess"
constexpr operator  ::UnityEngine::Rendering::ICameraHistoryWriteAccess*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IPerFrameHistoryAccessTracker"
constexpr operator  ::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*() noexcept;

/// @brief Method Dispose, addr 0xb2aa430, size 0x90, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GatherHistoryRequests, addr 0xb2aaf84, size 0x20, virtual false, abstract: false, final false
inline void GatherHistoryRequests() ;

/// @brief Method GetHistoryForRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename Type>
requires(::cordl_internals::type_constraint<Type, ::UnityEngine::Rendering::ContextItem*>)
inline Type GetHistoryForRead() ;

/// @brief Method GetHistoryForWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename Type>
requires(::cordl_internals::type_constraint<Type, ::UnityEngine::Rendering::ContextItem*> && ::cordl_internals::default_constructor_constraint<Type>)
inline Type GetHistoryForWrite() ;

/// @brief Method IsAccessRequested, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename Type>
requires(::cordl_internals::type_constraint<Type, ::UnityEngine::Rendering::ContextItem*>)
inline bool IsAccessRequested() ;

/// @brief Method IsValid, addr 0xb2aafe4, size 0x40, virtual false, abstract: false, final false
inline bool IsValid(int32_t  i) ;

/// @brief Method IsValidRequest, addr 0xb2aafa4, size 0x40, virtual false, abstract: false, final false
inline bool IsValidRequest(int32_t  i) ;

/// @brief Method IsWritten, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename Type>
requires(::cordl_internals::type_constraint<Type, ::UnityEngine::Rendering::ContextItem*>)
inline bool IsWritten() ;

static inline ::UnityEngine::Rendering::Universal::UniversalCameraHistory* New_ctor() ;

/// @brief Method ReleaseUnusedHistory, addr 0xb2ab024, size 0xbc, virtual false, abstract: false, final false
inline void ReleaseUnusedHistory() ;

/// @brief Method RequestAccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename Type>
requires(::cordl_internals::type_constraint<Type, ::UnityEngine::Rendering::ContextItem*>)
inline void RequestAccess() ;

/// @brief Method SwapAndSetReferenceSize, addr 0xb2ab0e0, size 0x18, virtual false, abstract: false, final false
inline void SwapAndSetReferenceSize(int32_t  cameraWidth, int32_t  cameraHeight) ;

constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* const& __cordl_internal_get_OnGatherHistoryRequests() const;

constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*& __cordl_internal_get_OnGatherHistoryRequests() ;

constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem* const& __cordl_internal_get_m_HistoryTextures() const;

constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem*& __cordl_internal_get_m_HistoryTextures() ;

constexpr ::ArrayW<::GlobalNamespace::UniversalCameraHistory_Item> const& __cordl_internal_get_m_Items() const;

constexpr ::ArrayW<::GlobalNamespace::UniversalCameraHistory_Item>& __cordl_internal_get_m_Items() ;

constexpr int32_t const& __cordl_internal_get_m_Version() const;

constexpr int32_t& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*  value) ;

constexpr void __cordl_internal_set_m_HistoryTextures(::UnityEngine::Rendering::BufferedRTHandleSystem*  value) ;

constexpr void __cordl_internal_set_m_Items(::ArrayW<::GlobalNamespace::UniversalCameraHistory_Item>  value) ;

constexpr void __cordl_internal_set_m_Version(int32_t  value) ;

/// @brief Method .ctor, addr 0xb2aa518, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnGatherHistoryRequests, addr 0xb2aae20, size 0x9c, virtual true, abstract: false, final true
inline void add_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*  value) ;

static inline uint32_t getStaticF_s_TypeCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::ICameraHistoryReadAccess"
constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess* i___UnityEngine__Rendering__ICameraHistoryReadAccess() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::ICameraHistoryWriteAccess"
constexpr ::UnityEngine::Rendering::ICameraHistoryWriteAccess* i___UnityEngine__Rendering__ICameraHistoryWriteAccess() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IPerFrameHistoryAccessTracker"
constexpr ::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* i___UnityEngine__Rendering__IPerFrameHistoryAccessTracker() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnGatherHistoryRequests, addr 0xb2aaebc, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*  value) ;

static inline void setStaticF_s_TypeCount(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalCameraHistory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalCameraHistory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalCameraHistory(UniversalCameraHistory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalCameraHistory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalCameraHistory(UniversalCameraHistory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18655};

/// @brief Field k_ValidVersionCount offset 0xffffffff size 0x4
static constexpr int32_t  k_ValidVersionCount{static_cast<int32_t>(0x2)};

/// @brief Field m_Items, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::UniversalCameraHistory_Item>  ___m_Items;

/// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_Version;

/// @brief Field m_HistoryTextures, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::BufferedRTHandleSystem*  ___m_HistoryTextures;

/// [CompilerGenerated]
/// @brief Field OnGatherHistoryRequests, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*  ___OnGatherHistoryRequests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory, ___m_Items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory, ___m_HistoryTextures) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory, ___OnGatherHistoryRequests) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalCameraHistory) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalCameraHistory/TypeId`1<T>
class CORDL_TYPE UniversalCameraHistory_TypeId_1 : public ::System::Object {
public:
// Declarations
/// @brief Field value, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_value, put=setStaticF_value)) uint32_t  value;

static inline uint32_t getStaticF_value() ;

static inline void setStaticF_value(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalCameraHistory_TypeId_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalCameraHistory_TypeId_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalCameraHistory_TypeId_1(UniversalCameraHistory_TypeId_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalCameraHistory_TypeId_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalCameraHistory_TypeId_1(UniversalCameraHistory_TypeId_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18653};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering::Universal
