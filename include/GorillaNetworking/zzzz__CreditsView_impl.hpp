#pragma once
// IWYU pragma private; include "GorillaNetworking/CreditsView.hpp"
#include "GorillaNetworking/zzzz__CreditsSection_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/zzzz__CreditsView_def.hpp"
#include "GorillaNetworking/zzzz__CreditsSection_def.hpp"
#include "GorillaNetworking/zzzz__CreditsView_def.hpp"
#include "GorillaNetworking/zzzz__GorillaKeyboardBindings_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::CreditsView.get_TotalPages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CreditsView::*)()>(&::GorillaNetworking::CreditsView::get_TotalPages)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c725ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"get_TotalPages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CreditsView::*)()>(&::GorillaNetworking::CreditsView::Start)> {
  constexpr static std::size_t size = 0x116c;
  constexpr static std::size_t addrs = 0x5c72688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView.PagesPerSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CreditsView::*)(::GorillaNetworking::CreditsSection*)>(&::GorillaNetworking::CreditsView::PagesPerSection)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c737f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"PagesPerSection", {}, {::i2c::type_of<::GorillaNetworking::CreditsSection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView.PageOfSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GorillaNetworking::CreditsView::*)(::GorillaNetworking::CreditsSection*, int32_t)>(&::GorillaNetworking::CreditsView::PageOfSection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c73894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"PageOfSection", {}, {::i2c::type_of<::GorillaNetworking::CreditsSection*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView.GetPageEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GorillaNetworking::CreditsSection*,int32_t> (::GorillaNetworking::CreditsView::*)(int32_t)>(&::GorillaNetworking::CreditsView::GetPageEntries)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c7391c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"GetPageEntries", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView.ProcessButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CreditsView::*)(::GorillaNetworking::GorillaKeyboardBindings)>(&::GorillaNetworking::CreditsView::ProcessButtonPress)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c73a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"ProcessButtonPress", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView.GetScreenText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CreditsView::*)()>(&::GorillaNetworking::CreditsView::GetScreenText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c73a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"GetScreenText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView.GetPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CreditsView::*)(int32_t)>(&::GorillaNetworking::CreditsView::GetPage)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x5c73a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"GetPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CreditsView::*)()>(&::GorillaNetworking::CreditsView::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c73fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView._get_TotalPages_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CreditsView::*)(::GorillaNetworking::CreditsSection*)>(&::GorillaNetworking::CreditsView::_get_TotalPages_b__7_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c73fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"<get_TotalPages>b__7_0", {}, {::i2c::type_of<::GorillaNetworking::CreditsSection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView._Start_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CreditsView::*)(::StringW)>(&::GorillaNetworking::CreditsView::_Start_b__9_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c73fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"<Start>b__9_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaNetworking::CreditsSection*>& GorillaNetworking::CreditsView::__cordl_internal_get_creditsSections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creditsSections;
}
constexpr ::ArrayW<::GorillaNetworking::CreditsSection*> const& GorillaNetworking::CreditsView::__cordl_internal_get_creditsSections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creditsSections;
}
constexpr void GorillaNetworking::CreditsView::__cordl_internal_set_creditsSections(::ArrayW<::GorillaNetworking::CreditsSection*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creditsSections = value;
}
constexpr int32_t& GorillaNetworking::CreditsView::__cordl_internal_get_pageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSize;
}
constexpr int32_t const& GorillaNetworking::CreditsView::__cordl_internal_get_pageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSize;
}
constexpr void GorillaNetworking::CreditsView::__cordl_internal_set_pageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageSize = value;
}
constexpr int32_t& GorillaNetworking::CreditsView::__cordl_internal_get_currentPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPage;
}
constexpr int32_t const& GorillaNetworking::CreditsView::__cordl_internal_get_currentPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPage;
}
constexpr void GorillaNetworking::CreditsView::__cordl_internal_set_currentPage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPage = value;
}
inline int32_t GorillaNetworking::CreditsView::get_TotalPages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"get_TotalPages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaNetworking::CreditsView::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaNetworking::CreditsView::PagesPerSection(::GorillaNetworking::CreditsSection*  section)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"PagesPerSection", {}, {::i2c::type_of<::GorillaNetworking::CreditsSection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, section);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GorillaNetworking::CreditsView::PageOfSection(::GorillaNetworking::CreditsSection*  section, int32_t  page)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"PageOfSection", {}, {::i2c::type_of<::GorillaNetworking::CreditsSection*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, section, page);
}
inline ::System::ValueTuple_2<::GorillaNetworking::CreditsSection*,int32_t> GorillaNetworking::CreditsView::GetPageEntries(int32_t  page)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"GetPageEntries", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GorillaNetworking::CreditsSection*,int32_t>>(this, ___internal_method, page);
}
inline void GorillaNetworking::CreditsView::ProcessButtonPress(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"ProcessButtonPress", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline ::StringW GorillaNetworking::CreditsView::GetScreenText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"GetScreenText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::CreditsView::GetPage(int32_t  page)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"GetPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, page);
}
inline void GorillaNetworking::CreditsView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaNetworking::CreditsView::_get_TotalPages_b__7_0(::GorillaNetworking::CreditsSection*  section)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"<get_TotalPages>b__7_0", {}, {::i2c::type_of<::GorillaNetworking::CreditsSection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, section);
}
inline void GorillaNetworking::CreditsView::_Start_b__9_0(::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView*>(),
                        {"<Start>b__9_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaNetworking::CreditsView* GorillaNetworking::CreditsView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CreditsView*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CreditsView::CreditsView()   {
}
//  Writing Method size for method: ::GorillaNetworking::CreditsView___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CreditsView___c::*)()>(&::GorillaNetworking::CreditsView___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c740b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsView___c._Start_b__9_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CreditsView___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::CreditsView___c::_Start_b__9_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c740b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView___c*>(),
                        {"<Start>b__9_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::CreditsView___c::setStaticF___9(::GorillaNetworking::CreditsView___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::CreditsView___c*, "<>9", ::GorillaNetworking::CreditsView___c*>(std::forward<::GorillaNetworking::CreditsView___c*>(value));
}
inline ::GorillaNetworking::CreditsView___c* GorillaNetworking::CreditsView___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::CreditsView___c*, "<>9", ::GorillaNetworking::CreditsView___c*>();
}
inline void GorillaNetworking::CreditsView___c::setStaticF___9__9_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__9_1", ::GorillaNetworking::CreditsView___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::CreditsView___c::getStaticF___9__9_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__9_1", ::GorillaNetworking::CreditsView___c*>();
}
inline void GorillaNetworking::CreditsView___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CreditsView___c::_Start_b__9_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsView___c*>(),
                        {"<Start>b__9_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaNetworking::CreditsView___c* GorillaNetworking::CreditsView___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CreditsView___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CreditsView___c::CreditsView___c()   {
}
