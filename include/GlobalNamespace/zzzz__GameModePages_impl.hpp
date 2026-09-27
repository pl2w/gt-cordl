#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModePages.hpp"
#include "GlobalNamespace/zzzz__BasePageHandler_impl.hpp"
#include "GlobalNamespace/zzzz__GameModeSelectButton_impl.hpp"
#include "GlobalNamespace/zzzz__GameModePages_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameModePages.get_pageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameModePages::*)()>(&::GlobalNamespace::GameModePages::get_pageSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x579c7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.get_entriesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameModePages::*)()>(&::GlobalNamespace::GameModePages::get_entriesCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x579c804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePages::*)()>(&::GlobalNamespace::GameModePages::Awake)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x579c874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePages::*)()>(&::GlobalNamespace::GameModePages::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x579c9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePages::*)()>(&::GlobalNamespace::GameModePages::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x579ca44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePages::*)()>(&::GlobalNamespace::GameModePages::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x579cabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.ShowPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePages::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::GameModePages::ShowPage)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x579cb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.PageEntrySelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePages::*)(int32_t, int32_t)>(&::GlobalNamespace::GameModePages::PageEntrySelected)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x579ce94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.UpdateAllButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePages::*)(int32_t)>(&::GlobalNamespace::GameModePages::UpdateAllButtons)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x579cd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"UpdateAllButtons", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.EnableEntryButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePages::*)(int32_t)>(&::GlobalNamespace::GameModePages::EnableEntryButtons)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x579cdbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"EnableEntryButtons", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages.SetSelectedGameModeShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GameModePages::SetSelectedGameModeShared)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x579cfd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"SetSelectedGameModeShared", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePages._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePages::*)()>(&::GlobalNamespace::GameModePages::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579d138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameModePages::__cordl_internal_get_currentButtonIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentButtonIndex;
}
constexpr int32_t const& GlobalNamespace::GameModePages::__cordl_internal_get_currentButtonIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentButtonIndex;
}
constexpr void GlobalNamespace::GameModePages::__cordl_internal_set_currentButtonIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentButtonIndex = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GameModePages::__cordl_internal_get_gameModeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GameModePages::__cordl_internal_get_gameModeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeText;
}
constexpr void GlobalNamespace::GameModePages::__cordl_internal_set_gameModeText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeText = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameModeSelectButton>>& GlobalNamespace::GameModePages::__cordl_internal_get_buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameModeSelectButton>> const& GlobalNamespace::GameModePages::__cordl_internal_get_buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr void GlobalNamespace::GameModePages::__cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::GameModeSelectButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttons = value;
}
constexpr bool& GlobalNamespace::GameModePages::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::GameModePages::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::GameModePages::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void GlobalNamespace::GameModePages::setStaticF_sharedSelectedIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "sharedSelectedIndex", ::GlobalNamespace::GameModePages*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GameModePages::getStaticF_sharedSelectedIndex()  {
return ::cordl_internals::getStaticField<int32_t, "sharedSelectedIndex", ::GlobalNamespace::GameModePages*>();
}
inline void GlobalNamespace::GameModePages::setStaticF_textBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "textBuilder", ::GlobalNamespace::GameModePages*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* GlobalNamespace::GameModePages::getStaticF_textBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "textBuilder", ::GlobalNamespace::GameModePages*>();
}
inline void GlobalNamespace::GameModePages::setStaticF_gameModeSelectorInstances(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModePages>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModePages>>*, "gameModeSelectorInstances", ::GlobalNamespace::GameModePages*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModePages>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModePages>>* GlobalNamespace::GameModePages::getStaticF_gameModeSelectorInstances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModePages>>*, "gameModeSelectorInstances", ::GlobalNamespace::GameModePages*>();
}
inline int32_t GlobalNamespace::GameModePages::get_pageSize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GameModePages::get_entriesCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameModePages::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModePages::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModePages::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModePages::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModePages::ShowPage(int32_t  selectedPage, int32_t  startIndex, int32_t  endIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedPage, startIndex, endIndex);
}
inline void GlobalNamespace::GameModePages::PageEntrySelected(int32_t  pageEntry, int32_t  selectionIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModePages*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageEntry, selectionIndex);
}
inline void GlobalNamespace::GameModePages::UpdateAllButtons(int32_t  onButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"UpdateAllButtons", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onButton);
}
inline void GlobalNamespace::GameModePages::EnableEntryButtons(int32_t  buttonsMissing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"EnableEntryButtons", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonsMissing);
}
inline void GlobalNamespace::GameModePages::SetSelectedGameModeShared(::StringW  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {"SetSelectedGameModeShared", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameMode);
}
inline void GlobalNamespace::GameModePages::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePages*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameModePages* GlobalNamespace::GameModePages::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameModePages*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameModePages::GameModePages()   {
}
