#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_Block.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Range_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Block_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_Block.get_Bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::AllocatorManager_Block::*)()>(&::GlobalNamespace::AllocatorManager_Block::get_Bytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf035a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"get_Bytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_Block.get_AllocatedBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::AllocatorManager_Block::*)()>(&::GlobalNamespace::AllocatorManager_Block::get_AllocatedBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf039fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"get_AllocatedBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_Block.get_Alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AllocatorManager_Block::*)()>(&::GlobalNamespace::AllocatorManager_Block::get_Alignment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf035b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"get_Alignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_Block.set_Alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AllocatorManager_Block::*)(int32_t)>(&::GlobalNamespace::AllocatorManager_Block::set_Alignment)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaf03a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"set_Alignment", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_Block.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AllocatorManager_Block::*)()>(&::GlobalNamespace::AllocatorManager_Block::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf039f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_Block.TryFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AllocatorManager_Block::*)()>(&::GlobalNamespace::AllocatorManager_Block::TryFree)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf03a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"TryFree", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int64_t GlobalNamespace::AllocatorManager_Block::get_Bytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"get_Bytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int64_t GlobalNamespace::AllocatorManager_Block::get_AllocatedBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"get_AllocatedBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::AllocatorManager_Block::get_Alignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"get_Alignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::AllocatorManager_Block::set_Alignment(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"set_Alignment", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::AllocatorManager_Block::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::AllocatorManager_Block::TryFree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Block>(),
                        {"TryFree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AllocatorManager_Block::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AllocatorManager_Block::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Range", ty: "::GlobalNamespace::AllocatorManager_Range", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BytesPerItem", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllocatedItems", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Log2Alignment", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Padding0", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Padding1", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Padding2", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AllocatorManager_Block::AllocatorManager_Block(::GlobalNamespace::AllocatorManager_Range  Range, int32_t  BytesPerItem, int32_t  AllocatedItems, uint8_t  Log2Alignment, uint8_t  Padding0, uint16_t  Padding1, uint32_t  Padding2) noexcept  {
this->Range = Range;
this->BytesPerItem = BytesPerItem;
this->AllocatedItems = AllocatedItems;
this->Log2Alignment = Log2Alignment;
this->Padding0 = Padding0;
this->Padding1 = Padding1;
this->Padding2 = Padding2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AllocatorManager_Block::AllocatorManager_Block()   {
}
