#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModSortPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__Toggle_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModSortPanel_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModSortPanel__ApplySort_d__4_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModSortPanel_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_GainedFocusCause_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModSortPanel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModSortPanel::*)()>(&::Modio::Unity::UI::Panels::ModSortPanel::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9fac56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModSortPanel.DoDefaultSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModSortPanel::*)()>(&::Modio::Unity::UI::Panels::ModSortPanel::DoDefaultSelection)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9fac5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModSortPanel.OnGainedFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModSortPanel::*)(::GlobalNamespace::ModioPanelBase_GainedFocusCause)>(&::Modio::Unity::UI::Panels::ModSortPanel::OnGainedFocus)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9fac72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModSortPanel.ApplySort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModSortPanel::*)()>(&::Modio::Unity::UI::Panels::ModSortPanel::ApplySort)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fac840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(),
                        {"ApplySort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModSortPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModSortPanel::*)()>(&::Modio::Unity::UI::Panels::ModSortPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fac8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>& Modio::Unity::UI::Panels::ModSortPanel::__cordl_internal_get__toggles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggles;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>> const& Modio::Unity::UI::Panels::ModSortPanel::__cordl_internal_get__toggles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggles;
}
constexpr void Modio::Unity::UI::Panels::ModSortPanel::__cordl_internal_set__toggles(::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggles = value;
}
inline void Modio::Unity::UI::Panels::ModSortPanel::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModSortPanel::DoDefaultSelection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModSortPanel::OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectionBehaviour);
}
inline void Modio::Unity::UI::Panels::ModSortPanel::ApplySort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(),
                        {"ApplySort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModSortPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModSortPanel* Modio::Unity::UI::Panels::ModSortPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModSortPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModSortPanel::ModSortPanel()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModSortPanel___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModSortPanel___c::*)()>(&::Modio::Unity::UI::Panels::ModSortPanel___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fac958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModSortPanel___c._DoDefaultSelection_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModSortPanel___c::*)(::UnityEngine::UI::Toggle*)>(&::Modio::Unity::UI::Panels::ModSortPanel___c::_DoDefaultSelection_b__2_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fac960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel___c*>(),
                        {"<DoDefaultSelection>b__2_0", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModSortPanel___c._ApplySort_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModSortPanel___c::*)(::UnityEngine::UI::Toggle*)>(&::Modio::Unity::UI::Panels::ModSortPanel___c::_ApplySort_b__4_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fac974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel___c*>(),
                        {"<ApplySort>b__4_0", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Panels::ModSortPanel___c::setStaticF___9(::Modio::Unity::UI::Panels::ModSortPanel___c*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::UI::Panels::ModSortPanel___c*, "<>9", ::Modio::Unity::UI::Panels::ModSortPanel___c*>(std::forward<::Modio::Unity::UI::Panels::ModSortPanel___c*>(value));
}
inline ::Modio::Unity::UI::Panels::ModSortPanel___c* Modio::Unity::UI::Panels::ModSortPanel___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Unity::UI::Panels::ModSortPanel___c*, "<>9", ::Modio::Unity::UI::Panels::ModSortPanel___c*>();
}
inline void Modio::Unity::UI::Panels::ModSortPanel___c::setStaticF___9__2_0(::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*, "<>9__2_0", ::Modio::Unity::UI::Panels::ModSortPanel___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>* Modio::Unity::UI::Panels::ModSortPanel___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*, "<>9__2_0", ::Modio::Unity::UI::Panels::ModSortPanel___c*>();
}
inline void Modio::Unity::UI::Panels::ModSortPanel___c::setStaticF___9__4_0(::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*, "<>9__4_0", ::Modio::Unity::UI::Panels::ModSortPanel___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>* Modio::Unity::UI::Panels::ModSortPanel___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*, "<>9__4_0", ::Modio::Unity::UI::Panels::ModSortPanel___c*>();
}
inline void Modio::Unity::UI::Panels::ModSortPanel___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Panels::ModSortPanel___c::_DoDefaultSelection_b__2_0(::UnityEngine::UI::Toggle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel___c*>(),
                        {"<DoDefaultSelection>b__2_0", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline bool Modio::Unity::UI::Panels::ModSortPanel___c::_ApplySort_b__4_0(::UnityEngine::UI::Toggle*  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModSortPanel___c*>(),
                        {"<ApplySort>b__4_0", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toggle);
}
inline ::Modio::Unity::UI::Panels::ModSortPanel___c* Modio::Unity::UI::Panels::ModSortPanel___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModSortPanel___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModSortPanel___c::ModSortPanel___c()   {
}
