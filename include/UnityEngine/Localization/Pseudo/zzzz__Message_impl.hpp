#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Message.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Message_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__MessageFragment_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Message_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__ReadOnlyMessageFragment_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__WritableMessageFragment_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.get_Original
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Pseudo::Message::*)()>(&::UnityEngine::Localization::Pseudo::Message::get_Original)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb022464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"get_Original", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.set_Original
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Message::*)(::StringW)>(&::UnityEngine::Localization::Pseudo::Message::set_Original)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02246c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"set_Original", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.get_Fragments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>* (::UnityEngine::Localization::Pseudo::Message::*)()>(&::UnityEngine::Localization::Pseudo::Message::get_Fragments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb022474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"get_Fragments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.set_Fragments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Message::*)(::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*)>(&::UnityEngine::Localization::Pseudo::Message::set_Fragments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02247c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"set_Fragments", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::Pseudo::Message::*)()>(&::UnityEngine::Localization::Pseudo::Message::get_Length)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb022484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.CreateTextFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::WritableMessageFragment* (::UnityEngine::Localization::Pseudo::Message::*)(::StringW, int32_t, int32_t)>(&::UnityEngine::Localization::Pseudo::Message::CreateTextFragment)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb0225e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateTextFragment", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.CreateTextFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::WritableMessageFragment* (::UnityEngine::Localization::Pseudo::Message::*)(::StringW)>(&::UnityEngine::Localization::Pseudo::Message::CreateTextFragment)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb0226a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateTextFragment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.CreateReadonlyTextFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* (::UnityEngine::Localization::Pseudo::Message::*)(::StringW, int32_t, int32_t)>(&::UnityEngine::Localization::Pseudo::Message::CreateReadonlyTextFragment)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb022748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateReadonlyTextFragment", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.CreateReadonlyTextFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* (::UnityEngine::Localization::Pseudo::Message::*)(::StringW)>(&::UnityEngine::Localization::Pseudo::Message::CreateReadonlyTextFragment)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb022804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateReadonlyTextFragment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.ReplaceFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Message::*)(::UnityEngine::Localization::Pseudo::MessageFragment*, ::UnityEngine::Localization::Pseudo::MessageFragment*)>(&::UnityEngine::Localization::Pseudo::Message::ReplaceFragment)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb0228a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"ReplaceFragment", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(), ::i2c::type_of<::UnityEngine::Localization::Pseudo::MessageFragment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.ReleaseFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Message::*)(::UnityEngine::Localization::Pseudo::MessageFragment*)>(&::UnityEngine::Localization::Pseudo::Message::ReleaseFragment)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb0229d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"ReleaseFragment", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::MessageFragment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.CreateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::Message* (*)(::StringW)>(&::UnityEngine::Localization::Pseudo::Message::CreateMessage)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb022af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Message::*)()>(&::UnityEngine::Localization::Pseudo::Message::Release)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb022c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Pseudo::Message::*)()>(&::UnityEngine::Localization::Pseudo::Message::ToString)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb022dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Message::*)()>(&::UnityEngine::Localization::Pseudo::Message::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb022ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::Pseudo::Message::__cordl_internal_get__Original_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Original_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Localization::Pseudo::Message::__cordl_internal_get__Original_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Original_k__BackingField;
}
constexpr void UnityEngine::Localization::Pseudo::Message::__cordl_internal_set__Original_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Original_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*& UnityEngine::Localization::Pseudo::Message::__cordl_internal_get__Fragments_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Fragments_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>* const& UnityEngine::Localization::Pseudo::Message::__cordl_internal_get__Fragments_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Fragments_k__BackingField;
}
constexpr void UnityEngine::Localization::Pseudo::Message::__cordl_internal_set__Fragments_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Fragments_k__BackingField = value;
}
inline void UnityEngine::Localization::Pseudo::Message::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::Message*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::Message*>*, "Pool", ::UnityEngine::Localization::Pseudo::Message*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::Message*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::Message*>* UnityEngine::Localization::Pseudo::Message::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::Message*>*, "Pool", ::UnityEngine::Localization::Pseudo::Message*>();
}
inline ::StringW UnityEngine::Localization::Pseudo::Message::get_Original()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"get_Original", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::Message::set_Original(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"set_Original", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>* UnityEngine::Localization::Pseudo::Message::get_Fragments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"get_Fragments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::Message::set_Fragments(::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"set_Fragments", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Localization::Pseudo::Message::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* UnityEngine::Localization::Pseudo::Message::CreateTextFragment(::StringW  original, int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateTextFragment", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(this, ___internal_method, original, start, end);
}
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* UnityEngine::Localization::Pseudo::Message::CreateTextFragment(::StringW  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateTextFragment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(this, ___internal_method, original);
}
inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* UnityEngine::Localization::Pseudo::Message::CreateReadonlyTextFragment(::StringW  original, int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateReadonlyTextFragment", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment*>(this, ___internal_method, original, start, end);
}
inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* UnityEngine::Localization::Pseudo::Message::CreateReadonlyTextFragment(::StringW  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateReadonlyTextFragment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment*>(this, ___internal_method, original);
}
inline void UnityEngine::Localization::Pseudo::Message::ReplaceFragment(::UnityEngine::Localization::Pseudo::MessageFragment*  original, ::UnityEngine::Localization::Pseudo::MessageFragment*  replacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"ReplaceFragment", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(), ::i2c::type_of<::UnityEngine::Localization::Pseudo::MessageFragment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, original, replacement);
}
inline void UnityEngine::Localization::Pseudo::Message::ReleaseFragment(::UnityEngine::Localization::Pseudo::MessageFragment*  fragment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"ReleaseFragment", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::MessageFragment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fragment);
}
inline ::UnityEngine::Localization::Pseudo::Message* UnityEngine::Localization::Pseudo::Message::CreateMessage(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"CreateMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::Message*>(nullptr, ___internal_method, text);
}
inline void UnityEngine::Localization::Pseudo::Message::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Pseudo::Message::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::Message::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::Message* UnityEngine::Localization::Pseudo::Message::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::Message*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::Message::Message()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Message___c::*)()>(&::UnityEngine::Localization::Pseudo::Message___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02321c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Message___c.__cctor_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::Message* (::UnityEngine::Localization::Pseudo::Message___c::*)()>(&::UnityEngine::Localization::Pseudo::Message___c::__cctor_b__21_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb023224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message___c*>(),
                        {"<.cctor>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Pseudo::Message___c::setStaticF___9(::UnityEngine::Localization::Pseudo::Message___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Pseudo::Message___c*, "<>9", ::UnityEngine::Localization::Pseudo::Message___c*>(std::forward<::UnityEngine::Localization::Pseudo::Message___c*>(value));
}
inline ::UnityEngine::Localization::Pseudo::Message___c* UnityEngine::Localization::Pseudo::Message___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Pseudo::Message___c*, "<>9", ::UnityEngine::Localization::Pseudo::Message___c*>();
}
inline void UnityEngine::Localization::Pseudo::Message___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::Message* UnityEngine::Localization::Pseudo::Message___c::__cctor_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Message___c*>(),
                        {"<.cctor>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::Message*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::Message___c* UnityEngine::Localization::Pseudo::Message___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::Message___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::Message___c::Message___c()   {
}
