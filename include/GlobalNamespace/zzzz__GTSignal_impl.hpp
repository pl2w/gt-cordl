#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignal.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTSignal_def.hpp"
#include "GlobalNamespace/zzzz__GTSignal_EmitMode_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTSignal._Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTSignal_EmitMode, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::_Emit)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5948cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"_Emit", {}, {::i2c::type_of<::GlobalNamespace::GTSignal_EmitMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal._Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::_Emit)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5949018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"_Emit", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal._ToEventContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(int32_t, double_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::_ToEventContent)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5948db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"_ToEventContent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.ComputeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::GTSignal::ComputeID)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5949110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"ComputeID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.InitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTSignal::InitializeOnLoad)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x59491b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59493a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTSignal_EmitMode, ::StringW, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5949414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::GTSignal_EmitMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5949488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTSignal_EmitMode, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59494f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::GTSignal_EmitMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x594955c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x594960c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59496d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59497ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x594989c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x594999c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5949ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5949bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5949d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignal.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignal::Emit)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5949e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTSignal::setStaticF_gTargetsToOptions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTSignal_EmitMode,::Photon::Realtime::RaiseEventOptions*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTSignal_EmitMode,::Photon::Realtime::RaiseEventOptions*>*, "gTargetsToOptions", ::GlobalNamespace::GTSignal*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTSignal_EmitMode,::Photon::Realtime::RaiseEventOptions*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTSignal_EmitMode,::Photon::Realtime::RaiseEventOptions*>* GlobalNamespace::GTSignal::getStaticF_gTargetsToOptions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTSignal_EmitMode,::Photon::Realtime::RaiseEventOptions*>*, "gTargetsToOptions", ::GlobalNamespace::GTSignal*>();
}
inline void GlobalNamespace::GTSignal::setStaticF_gLengthToContentArray(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*, "gLengthToContentArray", ::GlobalNamespace::GTSignal*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* GlobalNamespace::GTSignal::getStaticF_gLengthToContentArray()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*, "gLengthToContentArray", ::GlobalNamespace::GTSignal*>();
}
inline void GlobalNamespace::GTSignal::setStaticF_gLengthToTargetsArray(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*, "gLengthToTargetsArray", ::GlobalNamespace::GTSignal*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>* GlobalNamespace::GTSignal::getStaticF_gLengthToTargetsArray()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*, "gLengthToTargetsArray", ::GlobalNamespace::GTSignal*>();
}
inline void GlobalNamespace::GTSignal::setStaticF_gSendOptions(::ExitGames::Client::Photon::SendOptions  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SendOptions, "gSendOptions", ::GlobalNamespace::GTSignal*>(std::forward<::ExitGames::Client::Photon::SendOptions>(value));
}
inline ::ExitGames::Client::Photon::SendOptions GlobalNamespace::GTSignal::getStaticF_gSendOptions()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SendOptions, "gSendOptions", ::GlobalNamespace::GTSignal*>();
}
inline void GlobalNamespace::GTSignal::setStaticF_gCustomTargetOptions(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "gCustomTargetOptions", ::GlobalNamespace::GTSignal*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* GlobalNamespace::GTSignal::getStaticF_gCustomTargetOptions()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "gCustomTargetOptions", ::GlobalNamespace::GTSignal*>();
}
inline void GlobalNamespace::GTSignal::_Emit(::GlobalNamespace::GTSignal_EmitMode  mode, int32_t  signalID, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"_Emit", {}, {::i2c::type_of<::GlobalNamespace::GTSignal_EmitMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode, signalID, data);
}
inline void GlobalNamespace::GTSignal::_Emit(::ArrayW<int32_t>  targetActors, int32_t  signalID, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"_Emit", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetActors, signalID, data);
}
inline ::ArrayW<::System::Object*> GlobalNamespace::GTSignal::_ToEventContent(int32_t  signalID, double_t  time, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"_ToEventContent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, signalID, time, data);
}
inline int32_t GlobalNamespace::GTSignal::ComputeID(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"ComputeID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline void GlobalNamespace::GTSignal::InitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTSignal::Emit(::StringW  signal, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, signal, data);
}
inline void GlobalNamespace::GTSignal::Emit(::GlobalNamespace::GTSignal_EmitMode  mode, ::StringW  signal, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::GTSignal_EmitMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode, signal, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(::GlobalNamespace::GTSignal_EmitMode  mode, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::GTSignal_EmitMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target1, int32_t  target2, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target1, target2, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target1, target2, target3, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target1, target2, target3, target4, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target1, target2, target3, target4, target5, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target1, target2, target3, target4, target5, target6, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  target7, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target1, target2, target3, target4, target5, target6, target7, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  target7, int32_t  target8, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target1, target2, target3, target4, target5, target6, target7, target8, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  target7, int32_t  target8, int32_t  target9, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target1, target2, target3, target4, target5, target6, target7, target8, target9, signalID, data);
}
inline void GlobalNamespace::GTSignal::Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  target7, int32_t  target8, int32_t  target9, int32_t  target10, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignal*>(),
                        {"Emit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target1, target2, target3, target4, target5, target6, target7, target8, target9, target10, signalID, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTSignal::GTSignal()   {
}
