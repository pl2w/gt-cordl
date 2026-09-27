#pragma once
// IWYU pragma private; include "DefaultNamespace/EvolvingCosmeticSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DefaultNamespace/zzzz__EvolvingCosmeticSaveData_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::DefaultNamespace::EvolvingCosmeticSaveData.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DefaultNamespace::EvolvingCosmeticSaveData* (*)()>(&::DefaultNamespace::EvolvingCosmeticSaveData::get_Instance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5dd1174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DefaultNamespace::EvolvingCosmeticSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DefaultNamespace::EvolvingCosmeticSaveData::*)()>(&::DefaultNamespace::EvolvingCosmeticSaveData::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5dd11ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DefaultNamespace::EvolvingCosmeticSaveData.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DefaultNamespace::EvolvingCosmeticSaveData::*)()>(&::DefaultNamespace::EvolvingCosmeticSaveData::Write)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5dd15b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {"Write", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DefaultNamespace::EvolvingCosmeticSaveData.ReadFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DefaultNamespace::EvolvingCosmeticSaveData::*)(::StringW)>(&::DefaultNamespace::EvolvingCosmeticSaveData::ReadFromJson)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5dd12b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {"ReadFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DefaultNamespace::EvolvingCosmeticSaveData.ReadSelectedIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DefaultNamespace::EvolvingCosmeticSaveData::*)(::Newtonsoft::Json::JsonReader*)>(&::DefaultNamespace::EvolvingCosmeticSaveData::ReadSelectedIndices)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5dd1878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {"ReadSelectedIndices", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& DefaultNamespace::EvolvingCosmeticSaveData::__cordl_internal_get_SelectedIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedIndices;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& DefaultNamespace::EvolvingCosmeticSaveData::__cordl_internal_get_SelectedIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedIndices;
}
constexpr void DefaultNamespace::EvolvingCosmeticSaveData::__cordl_internal_set_SelectedIndices(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedIndices = value;
}
inline void DefaultNamespace::EvolvingCosmeticSaveData::setStaticF_s_instance(::DefaultNamespace::EvolvingCosmeticSaveData*  value)  {
::cordl_internals::setStaticField<::DefaultNamespace::EvolvingCosmeticSaveData*, "s_instance", ::DefaultNamespace::EvolvingCosmeticSaveData*>(std::forward<::DefaultNamespace::EvolvingCosmeticSaveData*>(value));
}
inline ::DefaultNamespace::EvolvingCosmeticSaveData* DefaultNamespace::EvolvingCosmeticSaveData::getStaticF_s_instance()  {
return ::cordl_internals::getStaticField<::DefaultNamespace::EvolvingCosmeticSaveData*, "s_instance", ::DefaultNamespace::EvolvingCosmeticSaveData*>();
}
inline ::DefaultNamespace::EvolvingCosmeticSaveData* DefaultNamespace::EvolvingCosmeticSaveData::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DefaultNamespace::EvolvingCosmeticSaveData*>(nullptr, ___internal_method);
}
inline void DefaultNamespace::EvolvingCosmeticSaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW DefaultNamespace::EvolvingCosmeticSaveData::Write()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {"Write", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void DefaultNamespace::EvolvingCosmeticSaveData::ReadFromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {"ReadFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void DefaultNamespace::EvolvingCosmeticSaveData::ReadSelectedIndices(::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DefaultNamespace::EvolvingCosmeticSaveData*>(),
                        {"ReadSelectedIndices", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::DefaultNamespace::EvolvingCosmeticSaveData* DefaultNamespace::EvolvingCosmeticSaveData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DefaultNamespace::EvolvingCosmeticSaveData*>());
}
// Ctor Parameters []
constexpr ::DefaultNamespace::EvolvingCosmeticSaveData::EvolvingCosmeticSaveData()   {
}
