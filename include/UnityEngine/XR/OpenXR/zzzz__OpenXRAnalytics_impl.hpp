#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRAnalytics.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_InitializeEvent_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Analytics/zzzz__IAnalytic_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_InitializeEvent_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics::Initialize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb4e2edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics.SendInitializeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics::SendInitializeEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4e2fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(),
                        {"SendInitializeEvent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics.CreateInitializeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRAnalytics_InitializeEvent (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics::CreateInitializeEvent)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0xb4e3018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(),
                        {"CreateInitializeEvent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics.SendPlayerAnalytics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OpenXRAnalytics_InitializeEvent)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics::SendPlayerAnalytics)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4e35b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(),
                        {"SendPlayerAnalytics", {}, {::i2c::type_of<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics::setStaticF_s_Initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "s_Initialized", ::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics::getStaticF_s_Initialized()  {
return ::cordl_internals::getStaticField<bool, "s_Initialized", ::UnityEngine::XR::OpenXR::OpenXRAnalytics*>();
}
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics::SendInitializeEvent(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(),
                        {"SendInitializeEvent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, success);
}
inline ::GlobalNamespace::OpenXRAnalytics_InitializeEvent UnityEngine::XR::OpenXR::OpenXRAnalytics::CreateInitializeEvent(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(),
                        {"CreateInitializeEvent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>(nullptr, ___internal_method, success);
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics::SendPlayerAnalytics(::GlobalNamespace::OpenXRAnalytics_InitializeEvent  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(),
                        {"SendPlayerAnalytics", {}, {::i2c::type_of<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRAnalytics::OpenXRAnalytics()   {
}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)()>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e3ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4e3ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__9_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4e3d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__9_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb4e3df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_2", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__9_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_3)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4e3e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_3", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__9_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_4)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb4e3ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_4", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__9_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_5)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4e3f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_5", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*, "<>9", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(std::forward<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*, "<>9", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__9_0(::System::Func_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__9_0", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(std::forward<::System::Func_2<::StringW,::StringW>*>(value));
}
inline ::System::Func_2<::StringW,::StringW>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__9_0", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__9_1(::System::Func_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__9_1", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(std::forward<::System::Func_2<::StringW,::StringW>*>(value));
}
inline ::System::Func_2<::StringW,::StringW>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__9_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__9_1", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__9_2(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*, "<>9__9_2", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__9_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*, "<>9__9_2", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__9_3(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*, "<>9__9_3", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__9_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*, "<>9__9_3", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__9_4(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*, "<>9__9_4", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__9_4()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*, "<>9__9_4", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__9_5(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*, "<>9__9_5", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__9_5()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*, "<>9__9_5", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_0(::StringW  ext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ext);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_1(::StringW  ext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ext);
}
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_2", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_3(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_3", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, f);
}
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_4(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_4", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__9_5(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                        {"<CreateInitializeEvent>b__9_5", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, f);
}
inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::OpenXRAnalytics___c()   {
}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::*)(::GlobalNamespace::OpenXRAnalytics_InitializeEvent)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4e3b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic.TryGatherData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::*)(::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>, ::by_ref<::System::Exception*>)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::TryGatherData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4e3bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic*>(),
                        {"TryGatherData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>& UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Nullable_1<::GlobalNamespace::OpenXRAnalytics_InitializeEvent> const& UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::__cordl_internal_set_data(::System::Nullable_1<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::_ctor(::GlobalNamespace::OpenXRAnalytics_InitializeEvent  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::TryGatherData(::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>  data, /* [NotNullWhen(false)] */ ::by_ref<::System::Exception*>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic*>(),
                        {"TryGatherData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, error);
}
inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic* UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::New_ctor(::GlobalNamespace::OpenXRAnalytics_InitializeEvent  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic*>(data));
}
/// @brief Convert operator to "::UnityEngine::Analytics::IAnalytic"
constexpr  UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::operator ::UnityEngine::Analytics::IAnalytic*() noexcept {
return static_cast<::UnityEngine::Analytics::IAnalytic*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Analytics::IAnalytic"
constexpr ::UnityEngine::Analytics::IAnalytic* UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::i___UnityEngine__Analytics__IAnalytic() noexcept {
return static_cast<::UnityEngine::Analytics::IAnalytic*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic::OpenXRAnalytics_XrInitializeAnalytic()   {
}
