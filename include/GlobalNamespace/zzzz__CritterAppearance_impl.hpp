#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterAppearance.hpp"
#include "GlobalNamespace/zzzz__CritterAppearance_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CritterAppearance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterAppearance::*)(::StringW, float_t)>(&::GlobalNamespace::CritterAppearance::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56f8524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterAppearance.WriteToRPCData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::GlobalNamespace::CritterAppearance::*)()>(&::GlobalNamespace::CritterAppearance::WriteToRPCData)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x56f854c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"WriteToRPCData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterAppearance.DataLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CritterAppearance::DataLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f86f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"DataLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterAppearance.ValidateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::CritterAppearance::ValidateData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56f86f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"ValidateData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterAppearance.ReadFromRPCData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CritterAppearance (*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::CritterAppearance::ReadFromRPCData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x56f8784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"ReadFromRPCData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterAppearance.ReadFromPhotonStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CritterAppearance (*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CritterAppearance::ReadFromPhotonStream)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56f88f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"ReadFromPhotonStream", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterAppearance.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CritterAppearance::*)()>(&::GlobalNamespace::CritterAppearance::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56f89a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                    {::i2c::class_of<::GlobalNamespace::CritterAppearance>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CritterAppearance::_ctor(::StringW  hatName, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hatName, size);
}
inline ::ArrayW<::System::Object*> GlobalNamespace::CritterAppearance::WriteToRPCData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"WriteToRPCData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::CritterAppearance::DataLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"DataLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CritterAppearance::ValidateData(::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"ValidateData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::CritterAppearance GlobalNamespace::CritterAppearance::ReadFromRPCData(::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"ReadFromRPCData", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CritterAppearance>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::CritterAppearance GlobalNamespace::CritterAppearance::ReadFromPhotonStream(::Photon::Pun::PhotonStream*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterAppearance>(),
                        {"ReadFromPhotonStream", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CritterAppearance>(nullptr, ___internal_method, data);
}
inline ::StringW GlobalNamespace::CritterAppearance::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CritterAppearance>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "size", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hatName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CritterAppearance::CritterAppearance(float_t  size, ::StringW  hatName) noexcept  {
this->size = size;
this->hatName = hatName;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CritterAppearance::CritterAppearance()   {
}
