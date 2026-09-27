#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/MessageFragment.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__MessageFragment_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Message_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__ReadOnlyMessageFragment_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__WritableMessageFragment_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::Pseudo::MessageFragment::*)()>(&::UnityEngine::Localization::Pseudo::MessageFragment::get_Length)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb021cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::Message* (::UnityEngine::Localization::Pseudo::MessageFragment::*)()>(&::UnityEngine::Localization::Pseudo::MessageFragment::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb021d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::MessageFragment::*)(::UnityEngine::Localization::Pseudo::Message*)>(&::UnityEngine::Localization::Pseudo::MessageFragment::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb021d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"set_Message", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::MessageFragment::*)(::UnityEngine::Localization::Pseudo::Message*, ::StringW, int32_t, int32_t)>(&::UnityEngine::Localization::Pseudo::MessageFragment::Initialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb021d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::MessageFragment::*)(::UnityEngine::Localization::Pseudo::Message*, ::StringW)>(&::UnityEngine::Localization::Pseudo::MessageFragment::Initialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb021d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.CreateTextFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::WritableMessageFragment* (::UnityEngine::Localization::Pseudo::MessageFragment::*)(int32_t, int32_t)>(&::UnityEngine::Localization::Pseudo::MessageFragment::CreateTextFragment)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb021dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"CreateTextFragment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.CreateReadonlyTextFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* (::UnityEngine::Localization::Pseudo::MessageFragment::*)(int32_t, int32_t)>(&::UnityEngine::Localization::Pseudo::MessageFragment::CreateReadonlyTextFragment)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb021e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"CreateReadonlyTextFragment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Pseudo::MessageFragment::*)()>(&::UnityEngine::Localization::Pseudo::MessageFragment::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb021f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.BuildString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::MessageFragment::*)(::System::Text::StringBuilder*)>(&::UnityEngine::Localization::Pseudo::MessageFragment::BuildString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb021fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"BuildString", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::Localization::Pseudo::MessageFragment::*)(int32_t)>(&::UnityEngine::Localization::Pseudo::MessageFragment::get_Item)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb021ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::MessageFragment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::MessageFragment::*)()>(&::UnityEngine::Localization::Pseudo::MessageFragment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb022024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get_m_OriginalString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalString;
}
constexpr ::StringW const& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get_m_OriginalString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalString;
}
constexpr void UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_set_m_OriginalString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalString = value;
}
constexpr int32_t& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get_m_StartIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartIndex;
}
constexpr int32_t const& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get_m_StartIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartIndex;
}
constexpr void UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_set_m_StartIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartIndex = value;
}
constexpr int32_t& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get_m_EndIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndIndex;
}
constexpr int32_t const& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get_m_EndIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndIndex;
}
constexpr void UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_set_m_EndIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndIndex = value;
}
constexpr ::StringW& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get_m_CachedToString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedToString;
}
constexpr ::StringW const& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get_m_CachedToString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedToString;
}
constexpr void UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_set_m_CachedToString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedToString = value;
}
constexpr ::UnityEngine::Localization::Pseudo::Message*& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get__Message_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr ::UnityEngine::Localization::Pseudo::Message* const& UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_get__Message_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr void UnityEngine::Localization::Pseudo::MessageFragment::__cordl_internal_set__Message_k__BackingField(::UnityEngine::Localization::Pseudo::Message*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Message_k__BackingField = value;
}
inline int32_t UnityEngine::Localization::Pseudo::MessageFragment::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::Message* UnityEngine::Localization::Pseudo::MessageFragment::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::Message*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::MessageFragment::set_Message(::UnityEngine::Localization::Pseudo::Message*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"set_Message", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Pseudo::MessageFragment::Initialize(::UnityEngine::Localization::Pseudo::Message*  parent, ::StringW  original, int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, original, start, end);
}
inline void UnityEngine::Localization::Pseudo::MessageFragment::Initialize(::UnityEngine::Localization::Pseudo::Message*  parent, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, text);
}
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* UnityEngine::Localization::Pseudo::MessageFragment::CreateTextFragment(int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"CreateTextFragment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(this, ___internal_method, start, end);
}
inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* UnityEngine::Localization::Pseudo::MessageFragment::CreateReadonlyTextFragment(int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"CreateReadonlyTextFragment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment*>(this, ___internal_method, start, end);
}
inline ::StringW UnityEngine::Localization::Pseudo::MessageFragment::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::MessageFragment::BuildString(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"BuildString", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline char16_t UnityEngine::Localization::Pseudo::MessageFragment::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, index);
}
inline void UnityEngine::Localization::Pseudo::MessageFragment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::MessageFragment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::MessageFragment* UnityEngine::Localization::Pseudo::MessageFragment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::MessageFragment*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::MessageFragment::MessageFragment()   {
}
