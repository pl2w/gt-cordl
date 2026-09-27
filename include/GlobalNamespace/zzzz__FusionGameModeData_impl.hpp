#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionGameModeData.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FusionGameModeData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FusionGameModeData.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FusionGameModeData::*)()>(&::GlobalNamespace::FusionGameModeData::get_Data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionGameModeData.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionGameModeData::*)(::System::Object*)>(&::GlobalNamespace::FusionGameModeData::set_Data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionGameModeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionGameModeData::*)()>(&::GlobalNamespace::FusionGameModeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579baa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionGameModeData.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionGameModeData::*)(bool)>(&::GlobalNamespace::FusionGameModeData::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579bb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionGameModeData.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionGameModeData::*)()>(&::GlobalNamespace::FusionGameModeData::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579bb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::INetworkStruct*& GlobalNamespace::FusionGameModeData::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::Fusion::INetworkStruct* const& GlobalNamespace::FusionGameModeData::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::FusionGameModeData::__cordl_internal_set_data(::Fusion::INetworkStruct*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline ::System::Object* GlobalNamespace::FusionGameModeData::get_Data()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FusionGameModeData::set_Data(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FusionGameModeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionGameModeData::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::FusionGameModeData::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionGameModeData*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FusionGameModeData* GlobalNamespace::FusionGameModeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionGameModeData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionGameModeData::FusionGameModeData()   {
}
