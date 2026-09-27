#pragma once
// IWYU pragma private; include "System/Text/ValueStringBuilder.hpp"
#include "System/zzzz__Span_1_impl.hpp"
#include "System/Text/zzzz__ValueStringBuilder_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Text::ValueStringBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)(::System::Span_1<char16_t>)>(&::System::Text::ValueStringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa9fd6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::System::Span_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::ValueStringBuilder::*)()>(&::System::Text::ValueStringBuilder::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaa02e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::ValueStringBuilder::*)()>(&::System::Text::ValueStringBuilder::ToString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa9fd978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                    {::i2c::class_of<::System::Text::ValueStringBuilder>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.TryCopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::ValueStringBuilder::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Text::ValueStringBuilder::TryCopyTo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa9fd888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"TryCopyTo", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)(int32_t, char16_t, int32_t)>(&::System::Text::ValueStringBuilder::Insert)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa9fd6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)(char16_t)>(&::System::Text::ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaa030b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)(::StringW)>(&::System::Text::ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaa031ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.AppendSlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)(::StringW)>(&::System::Text::ValueStringBuilder::AppendSlow)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaa03258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"AppendSlow", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)(char16_t, int32_t)>(&::System::Text::ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xaa01e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)(char16_t*, int32_t)>(&::System::Text::ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xaa01d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.AppendSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<char16_t> (::System::Text::ValueStringBuilder::*)(int32_t)>(&::System::Text::ValueStringBuilder::AppendSpan)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaa0338c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"AppendSpan", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.GrowAndAppend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)(char16_t)>(&::System::Text::ValueStringBuilder::GrowAndAppend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaa0312c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"GrowAndAppend", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.Grow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)(int32_t)>(&::System::Text::ValueStringBuilder::Grow)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xaa02e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueStringBuilder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueStringBuilder::*)()>(&::System::Text::ValueStringBuilder::Dispose)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xaa0344c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Text::ValueStringBuilder::_ctor(::System::Span_1<char16_t>  initialBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::System::Span_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialBuffer);
}
inline int32_t System::Text::ValueStringBuilder::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Text::ValueStringBuilder::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Text::ValueStringBuilder>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool System::Text::ValueStringBuilder::TryCopyTo(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"TryCopyTo", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten);
}
inline void System::Text::ValueStringBuilder::Insert(int32_t  index, char16_t  value, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value, count);
}
inline void System::Text::ValueStringBuilder::Append(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c);
}
inline void System::Text::ValueStringBuilder::Append(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, s);
}
inline void System::Text::ValueStringBuilder::AppendSlow(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"AppendSlow", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, s);
}
inline void System::Text::ValueStringBuilder::Append(char16_t  c, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c, count);
}
inline void System::Text::ValueStringBuilder::Append(char16_t*  value, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, length);
}
inline ::System::Span_1<char16_t> System::Text::ValueStringBuilder::AppendSpan(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"AppendSpan", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<char16_t>>(*this, ___internal_method, length);
}
inline void System::Text::ValueStringBuilder::GrowAndAppend(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"GrowAndAppend", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c);
}
inline void System::Text::ValueStringBuilder::Grow(int32_t  requiredAdditionalCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, requiredAdditionalCapacity);
}
inline void System::Text::ValueStringBuilder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::ValueStringBuilder>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_chars", ty: "::System::Span_1<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Text::ValueStringBuilder::ValueStringBuilder(::ArrayW<char16_t>  _arrayToReturnToPool, ::System::Span_1<char16_t>  _chars, int32_t  _pos) noexcept  {
this->_arrayToReturnToPool = _arrayToReturnToPool;
this->_chars = _chars;
this->_pos = _pos;
}
// Ctor Parameters []
constexpr ::System::Text::ValueStringBuilder::ValueStringBuilder()   {
}
