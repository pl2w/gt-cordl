#pragma once
// IWYU pragma private; include "Fusion/NetworkInputUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkInputUtils_def.hpp"
#include "Fusion/zzzz__NetworkInputUtils_def.hpp"
#include "Fusion/zzzz__NetworkInputWeavedAttribute_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkInputUtils.LoadTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkInputUtils::LoadTypes)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x600b980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"LoadTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkInputUtils.GetMaxWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Fusion::NetworkInputUtils::GetMaxWordCount)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x600c05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"GetMaxWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkInputUtils.GetWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Fusion::NetworkInputUtils::GetWordCount)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x600b6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"GetWordCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkInputUtils.GetTypeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Fusion::NetworkInputUtils::GetTypeKey)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x600b85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"GetTypeKey", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkInputUtils.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(int32_t)>(&::Fusion::NetworkInputUtils::GetType)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x600b40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"GetType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkInputUtils.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkInputUtils::ResetStatics)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x600c260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkInputUtils::setStaticF__initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "_initialized", ::Fusion::NetworkInputUtils*>(std::forward<bool>(value));
}
inline bool Fusion::NetworkInputUtils::getStaticF__initialized()  {
return ::cordl_internals::getStaticField<bool, "_initialized", ::Fusion::NetworkInputUtils*>();
}
inline void Fusion::NetworkInputUtils::setStaticF__wordCount(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "_wordCount", ::Fusion::NetworkInputUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* Fusion::NetworkInputUtils::getStaticF__wordCount()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "_wordCount", ::Fusion::NetworkInputUtils*>();
}
inline void Fusion::NetworkInputUtils::setStaticF__typeKey(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "_typeKey", ::Fusion::NetworkInputUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* Fusion::NetworkInputUtils::getStaticF__typeKey()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "_typeKey", ::Fusion::NetworkInputUtils*>();
}
inline void Fusion::NetworkInputUtils::LoadTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"LoadTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t Fusion::NetworkInputUtils::GetMaxWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"GetMaxWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Fusion::NetworkInputUtils::GetWordCount(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"GetWordCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline int32_t Fusion::NetworkInputUtils::GetTypeKey(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"GetTypeKey", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline ::System::Type* Fusion::NetworkInputUtils::GetType(int32_t  typeKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"GetType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, typeKey);
}
inline void Fusion::NetworkInputUtils::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkInputUtils::NetworkInputUtils()   {
}
//  Writing Method size for method: ::Fusion::NetworkInputUtils___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkInputUtils___c::*)()>(&::Fusion::NetworkInputUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600c32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkInputUtils___c._LoadTypes_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkInputUtils___c::*)(::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>, ::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>)>(&::Fusion::NetworkInputUtils___c::_LoadTypes_b__3_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x600c334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils___c*>(),
                        {"<LoadTypes>b__3_0", {}, {::i2c::type_of<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>(), ::i2c::type_of<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkInputUtils___c::setStaticF___9(::Fusion::NetworkInputUtils___c*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkInputUtils___c*, "<>9", ::Fusion::NetworkInputUtils___c*>(std::forward<::Fusion::NetworkInputUtils___c*>(value));
}
inline ::Fusion::NetworkInputUtils___c* Fusion::NetworkInputUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkInputUtils___c*, "<>9", ::Fusion::NetworkInputUtils___c*>();
}
inline void Fusion::NetworkInputUtils___c::setStaticF___9__3_0(::System::Comparison_1<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>*, "<>9__3_0", ::Fusion::NetworkInputUtils___c*>(std::forward<::System::Comparison_1<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>*>(value));
}
inline ::System::Comparison_1<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>* Fusion::NetworkInputUtils___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>*, "<>9__3_0", ::Fusion::NetworkInputUtils___c*>();
}
inline void Fusion::NetworkInputUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Fusion::NetworkInputUtils___c::_LoadTypes_b__3_0(::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>  a, ::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkInputUtils___c*>(),
                        {"<LoadTypes>b__3_0", {}, {::i2c::type_of<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>(), ::i2c::type_of<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::Fusion::NetworkInputUtils___c* Fusion::NetworkInputUtils___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkInputUtils___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkInputUtils___c::NetworkInputUtils___c()   {
}
