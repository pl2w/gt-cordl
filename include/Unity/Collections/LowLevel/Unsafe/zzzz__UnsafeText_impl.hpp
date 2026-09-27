#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeText.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UntypedUnsafeList_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeText_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__IUTF8Bytes_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeText.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeText::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeText::get_IsCreated)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaf07f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeText.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeText*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeText::Free)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaf07040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"Free", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeText.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeText::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeText::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaf07fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeText.GetUnsafePtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::LowLevel::Unsafe::UnsafeText::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeText::GetUnsafePtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf0801c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"GetUnsafePtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeText.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeText::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeText::get_Capacity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf08024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeText.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeText::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeText::get_Length)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf08084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeText.set_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeText::*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeText::set_Length)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaf080e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeText.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::LowLevel::Unsafe::UnsafeText::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeText::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaf08194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                    {::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeText::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeText::Free(::Unity::Collections::LowLevel::Unsafe::UnsafeText*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"Free", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeText::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint8_t* Unity::Collections::LowLevel::Unsafe::UnsafeText::GetUnsafePtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"GetUnsafePtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeText::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeText::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeText::set_Length(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Unity::Collections::LowLevel::Unsafe::UnsafeText::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeText::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeText::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeText::operator ::Unity::Collections::IUTF8Bytes*()  {
return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* Unity::Collections::LowLevel::Unsafe::UnsafeText::i___Unity__Collections__IUTF8Bytes()  {
return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeText::operator ::Unity::Collections::INativeList_1<uint8_t>*()  {
return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* Unity::Collections::LowLevel::Unsafe::UnsafeText::i___Unity__Collections__INativeList_1_uint8_t_()  {
return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeText::operator ::Unity::Collections::IIndexable_1<uint8_t>*()  {
return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* Unity::Collections::LowLevel::Unsafe::UnsafeText::i___Unity__Collections__IIndexable_1_uint8_t_()  {
return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_UntypedListData", ty: "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeText::UnsafeText(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList  m_UntypedListData) noexcept  {
this->m_UntypedListData = m_UntypedListData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeText::UnsafeText()   {
}
