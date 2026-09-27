#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsModTile.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsModTile_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsModTile__SetMod_d__23_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.get_PlayerCountText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::get_PlayerCountText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a038a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"get_PlayerCountText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.set_PlayerCountText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)(::StringW)>(&::GlobalNamespace::CustomMapsModTile::set_PlayerCountText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a038c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"set_PlayerCountText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.get_CurrentMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::get_CurrentMod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a038e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"get_CurrentMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::Awake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a038ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.ShowTileText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)(bool, bool)>(&::GlobalNamespace::CustomMapsModTile::ShowTileText)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5a03934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"ShowTileText", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.ActivateTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)(bool)>(&::GlobalNamespace::CustomMapsModTile::ActivateTile)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a03a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"ActivateTile", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.DeactivateTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::DeactivateTile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a03b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"DeactivateTile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.PressButtonColourUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::PressButtonColourUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a03ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.OnButtonPressedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::OnButtonPressedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a03ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.SetMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)(::Modio::Mods::Mod*, bool)>(&::GlobalNamespace::CustomMapsModTile::SetMod)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a03ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"SetMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.ResetLogo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::ResetLogo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a03b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"ResetLogo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.ShowDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::ShowDetails)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a03c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"ShowDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.HighlightTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::HighlightTile)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a03e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"HighlightTile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile.IsCurrentModHidden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::IsCurrentModHidden)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a03e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"IsCurrentModHidden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsModTile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsModTile::*)()>(&::GlobalNamespace::CustomMapsModTile::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a03f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_ratingsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ratingsText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_ratingsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ratingsText;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set_ratingsText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ratingsText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_mapNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNameText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_mapNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNameText;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set_mapNameText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapNameText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_thumsbUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thumsbUp;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_thumsbUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thumsbUp;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set_thumsbUp(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thumsbUp = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_highlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highlight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_highlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highlight;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set_highlight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highlight = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsModTile::__cordl_internal_get__playerCountText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCountText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get__playerCountText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCountText;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set__playerCountText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerCountText = value;
}
constexpr ::Modio::Mods::Mod*& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_currentMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMod;
}
constexpr ::Modio::Mods::Mod* const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_currentMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMod;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set_currentMod(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentMod = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_defaultLogo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLogo;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_defaultLogo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLogo;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set_defaultLogo(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLogo = value;
}
constexpr bool& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_isDownloadingThumbnail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDownloadingThumbnail;
}
constexpr bool const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_isDownloadingThumbnail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDownloadingThumbnail;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set_isDownloadingThumbnail(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDownloadingThumbnail = value;
}
constexpr bool& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_newDownloadRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newDownloadRequest;
}
constexpr bool const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_newDownloadRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newDownloadRequest;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set_newDownloadRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newDownloadRequest = value;
}
constexpr bool& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GlobalNamespace::CustomMapsModTile::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GlobalNamespace::CustomMapsModTile::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
inline ::StringW GlobalNamespace::CustomMapsModTile::get_PlayerCountText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"get_PlayerCountText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsModTile::set_PlayerCountText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"set_PlayerCountText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::Mod* GlobalNamespace::CustomMapsModTile::get_CurrentMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"get_CurrentMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsModTile::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsModTile::ShowTileText(bool  show, bool  useMapName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"ShowTileText", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, show, useMapName);
}
inline void GlobalNamespace::CustomMapsModTile::ActivateTile(bool  useMapName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"ActivateTile", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useMapName);
}
inline void GlobalNamespace::CustomMapsModTile::DeactivateTile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"DeactivateTile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsModTile::PressButtonColourUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsModTile::OnButtonPressedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsModTile::SetMod(::Modio::Mods::Mod*  mod, bool  useMapName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"SetMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, useMapName);
}
inline void GlobalNamespace::CustomMapsModTile::ResetLogo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"ResetLogo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsModTile::ShowDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"ShowDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsModTile::HighlightTile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"HighlightTile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsModTile::IsCurrentModHidden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {"IsCurrentModHidden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsModTile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsModTile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsModTile* GlobalNamespace::CustomMapsModTile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsModTile*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsModTile::CustomMapsModTile()   {
}
