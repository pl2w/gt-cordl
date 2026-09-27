#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsGalleryView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsGalleryView)
namespace GlobalNamespace {
class CustomMapsGalleryView_RequestSynchronizer;
}
namespace GlobalNamespace {
class CustomMapsGalleryView_SynchronizedRequest;
}
namespace GlobalNamespace {
class CustomMapsGalleryView___c__DisplayClass3_0;
}
namespace GlobalNamespace {
class CustomMapsModTile;
}
namespace GlobalNamespace {
class SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0;
}
namespace Modio::Mods {
class Mod;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsGalleryView;
}
namespace GlobalNamespace {
class CustomMapsGalleryView_RequestSynchronizer;
}
namespace GlobalNamespace {
class CustomMapsGalleryView_SynchronizedRequest;
}
namespace GlobalNamespace {
class CustomMapsGalleryView___c__DisplayClass3_0;
}
namespace GlobalNamespace {
class SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsGalleryView*);
MARK_REF_T(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*);
MARK_REF_T(::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*);
MARK_REF_T(::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0*);
MARK_REF_T(::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGalleryView*, "", "CustomMapsGalleryView");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*, "", "CustomMapsGalleryView/RequestSynchronizer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*, "", "CustomMapsGalleryView/SynchronizedRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0*, "", "CustomMapsGalleryView/<>c__DisplayClass3_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0*, "", "CustomMapsGalleryView/SynchronizedRequest/<>c__DisplayClass6_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGalleryView
class CORDL_TYPE CustomMapsGalleryView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RequestSynchronizer = ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer;

using SynchronizedRequest = ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest;

using __c__DisplayClass3_0 = ::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0;

/// @brief Field _synchronizer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__synchronizer, put=__cordl_internal_set__synchronizer)) ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  _synchronizer;

/// @brief Field modTiles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_modTiles, put=__cordl_internal_set_modTiles)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CustomMapsModTile>>*  modTiles;

/// @brief Method DisplayGallery, addr 0x59fddcc, size 0x2d4, virtual false, abstract: false, final false
inline bool DisplayGallery(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  mods, bool  useMapName, ::by_ref<::StringW>  error) ;

/// @brief Method HighlightTileAtIndex, addr 0x59fe25c, size 0x88, virtual false, abstract: false, final false
inline void HighlightTileAtIndex(int32_t  tileIndex) ;

static inline ::GlobalNamespace::CustomMapsGalleryView* New_ctor() ;

/// @brief Method ResetGallery, addr 0x59fdd40, size 0x8c, virtual false, abstract: false, final false
inline void ResetGallery() ;

/// @brief Method ShowDetailsForEntry, addr 0x59fe1d4, size 0x88, virtual false, abstract: false, final false
inline void ShowDetailsForEntry(int32_t  entryIndex) ;

/// @brief Method ShowTileText, addr 0x59fe130, size 0xa4, virtual false, abstract: false, final false
inline void ShowTileText(bool  show, bool  useMapName) ;

constexpr ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer* const& __cordl_internal_get__synchronizer() const;

constexpr ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*& __cordl_internal_get__synchronizer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CustomMapsModTile>>* const& __cordl_internal_get_modTiles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CustomMapsModTile>>*& __cordl_internal_get_modTiles() ;

constexpr void __cordl_internal_set__synchronizer(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  value) ;

constexpr void __cordl_internal_set_modTiles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CustomMapsModTile>>*  value) ;

/// @brief Method .ctor, addr 0x59fe2e4, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGalleryView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGalleryView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGalleryView(CustomMapsGalleryView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGalleryView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGalleryView(CustomMapsGalleryView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2745};

/// [SerializeField]
/// @brief Field modTiles, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CustomMapsModTile>>*  ___modTiles;

/// @brief Field _synchronizer, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  ____synchronizer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsGalleryView, ___modTiles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGalleryView, ____synchronizer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsGalleryView) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGalleryView/<>c__DisplayClass3_0
class CORDL_TYPE CustomMapsGalleryView___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CustomMapsGalleryView>  __4__this;

/// @brief Field idx, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_idx, put=__cordl_internal_set_idx)) int32_t  idx;

static inline ::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <DisplayGallery>b__0, addr 0x59fe974, size 0x70, virtual false, abstract: false, final false
inline void _DisplayGallery_b__0(::StringW  count) ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_idx() const;

constexpr int32_t& __cordl_internal_get_idx() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CustomMapsGalleryView>  value) ;

constexpr void __cordl_internal_set_idx(int32_t  value) ;

/// @brief Method .ctor, addr 0x59fe0a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGalleryView___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGalleryView___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGalleryView___c__DisplayClass3_0(CustomMapsGalleryView___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGalleryView___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGalleryView___c__DisplayClass3_0(CustomMapsGalleryView___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2744};

/// @brief Field idx, offset: 0x10, size: 0x4, def value: None
 int32_t  ___idx;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsGalleryView>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0, ___idx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGalleryView/SynchronizedRequest
class CORDL_TYPE CustomMapsGalleryView_SynchronizedRequest : public ::System::Object {
public:
// Declarations
using __c__DisplayClass6_0 = ::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0;

/// @brief Field _errorCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorCallback, put=__cordl_internal_set__errorCallback)) ::System::Action_1<::PlayFab::PlayFabError*>*  _errorCallback;

/// @brief Field _id, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

/// @brief Field _modsAndCallbacks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__modsAndCallbacks, put=__cordl_internal_set__modsAndCallbacks)) ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  _modsAndCallbacks;

/// @brief Field _parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  _parent;

static inline ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest* New_ctor(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  parent, int32_t  id, ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method Send, addr 0x59fe434, size 0x41c, virtual false, abstract: false, final false
inline void Send() ;

/// @brief Method WrapCallback, addr 0x59fe850, size 0xd0, virtual false, abstract: false, final false
inline ::System::Action_1<::StringW>* WrapCallback(::System::Action_1<::StringW>*  source) ;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& __cordl_internal_get__errorCallback() const;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& __cordl_internal_get__errorCallback() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>* const& __cordl_internal_get__modsAndCallbacks() const;

constexpr ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*& __cordl_internal_get__modsAndCallbacks() ;

constexpr ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer* const& __cordl_internal_get__parent() const;

constexpr ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*& __cordl_internal_get__parent() ;

constexpr void __cordl_internal_set__errorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

constexpr void __cordl_internal_set__modsAndCallbacks(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set__parent(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  value) ;

/// @brief Method .ctor, addr 0x59fe3cc, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  parent, int32_t  id, ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGalleryView_SynchronizedRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGalleryView_SynchronizedRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGalleryView_SynchronizedRequest(CustomMapsGalleryView_SynchronizedRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGalleryView_SynchronizedRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGalleryView_SynchronizedRequest(CustomMapsGalleryView_SynchronizedRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2743};

/// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  ____parent;

/// @brief Field _id, offset: 0x18, size: 0x4, def value: None
 int32_t  ____id;

/// @brief Field _modsAndCallbacks, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  ____modsAndCallbacks;

/// @brief Field _errorCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::PlayFab::PlayFabError*>*  ____errorCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest, ____parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest, ____id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest, ____modsAndCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest, ____errorCallback) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGalleryView/SynchronizedRequest/<>c__DisplayClass6_0
class CORDL_TYPE SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*  __4__this;

/// @brief Field source, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::System::Action_1<::StringW>*  source;

static inline ::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <WrapCallback>b__0, addr 0x59fe928, size 0x4c, virtual false, abstract: false, final false
inline void _WrapCallback_b__0(::StringW  result) ;

constexpr ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_source() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*  value) ;

constexpr void __cordl_internal_set_source(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x59fe920, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0(SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0(SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2742};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*  _____4__this;

/// @brief Field source, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0, ___source) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGalleryView/RequestSynchronizer
class CORDL_TYPE CustomMapsGalleryView_RequestSynchronizer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LatestRequest, put=set_LatestRequest)) int32_t  LatestRequest;

/// @brief Field <LatestRequest>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__LatestRequest_k__BackingField, put=__cordl_internal_set__LatestRequest_k__BackingField)) int32_t  _LatestRequest_k__BackingField;

static inline ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer* New_ctor() ;

/// @brief Method SendRequest, addr 0x59fe0a8, size 0x88, virtual false, abstract: false, final false
inline void SendRequest(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

constexpr int32_t const& __cordl_internal_get__LatestRequest_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LatestRequest_k__BackingField() ;

constexpr void __cordl_internal_set__LatestRequest_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x59fe3ac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_LatestRequest, addr 0x59fe3bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LatestRequest() ;

/// [CompilerGenerated]
/// @brief Method set_LatestRequest, addr 0x59fe3c4, size 0x8, virtual false, abstract: false, final false
inline void set_LatestRequest(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGalleryView_RequestSynchronizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGalleryView_RequestSynchronizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGalleryView_RequestSynchronizer(CustomMapsGalleryView_RequestSynchronizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGalleryView_RequestSynchronizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGalleryView_RequestSynchronizer(CustomMapsGalleryView_RequestSynchronizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2741};

/// [CompilerGenerated]
/// @brief Field <LatestRequest>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____LatestRequest_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer, ____LatestRequest_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
