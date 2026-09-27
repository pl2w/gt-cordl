#pragma once
// IWYU pragma private; include "Fusion/NetworkStructUtils.hpp"
#include "Fusion/zzzz__INetworkStruct_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkStructUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkStructUtils.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkStructUtils::ResetStatics)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x600c44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructUtils*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkStructUtils.GetWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Fusion::NetworkStructUtils::GetWordCount)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x600c4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructUtils*>(),
                        {"GetWordCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkStructUtils::setStaticF__wordCounts(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "_wordCounts", ::Fusion::NetworkStructUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* Fusion::NetworkStructUtils::getStaticF__wordCounts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "_wordCounts", ::Fusion::NetworkStructUtils*>();
}
inline void Fusion::NetworkStructUtils::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructUtils*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkStruct*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::NetworkStructUtils::GetWordCount()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkStructUtils*>(),
                    {"GetWordCount", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Fusion::NetworkStructUtils::GetWordCount(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructUtils*>(),
                        {"GetWordCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkStructUtils::NetworkStructUtils()   {
}
