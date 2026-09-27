#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/PreProcessingDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Fusion/LagCompensation/zzzz__PreProcessingDelegate_def.hpp"
#include "Fusion/LagCompensation/zzzz__Query_def.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::PreProcessingDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::PreProcessingDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::LagCompensation::PreProcessingDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x601bc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::PreProcessingDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::PreProcessingDelegate::*)(::Fusion::LagCompensation::Query*, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*, ::System::Collections::Generic::HashSet_1<int32_t>*)>(&::Fusion::LagCompensation::PreProcessingDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601bd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::PreProcessingDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::LagCompensation::PreProcessingDelegate::*)(::Fusion::LagCompensation::Query*, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*, ::System::Collections::Generic::HashSet_1<int32_t>*, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::LagCompensation::PreProcessingDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x601bd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::PreProcessingDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::PreProcessingDelegate::*)(::System::IAsyncResult*)>(&::Fusion::LagCompensation::PreProcessingDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x601bd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::LagCompensation::PreProcessingDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::LagCompensation::PreProcessingDelegate::Invoke(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  rootCandidates, ::System::Collections::Generic::HashSet_1<int32_t>*  processedColliderIndices)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, query, rootCandidates, processedColliderIndices);
}
inline ::System::IAsyncResult* Fusion::LagCompensation::PreProcessingDelegate::BeginInvoke(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  rootCandidates, ::System::Collections::Generic::HashSet_1<int32_t>*  processedColliderIndices, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, query, rootCandidates, processedColliderIndices, callback, object);
}
inline void Fusion::LagCompensation::PreProcessingDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::PreProcessingDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::LagCompensation::PreProcessingDelegate* Fusion::LagCompensation::PreProcessingDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::PreProcessingDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::PreProcessingDelegate::PreProcessingDelegate()   {
}
