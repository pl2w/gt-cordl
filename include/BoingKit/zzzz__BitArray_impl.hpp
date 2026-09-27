#pragma once
// IWYU pragma private; include "BoingKit/BitArray.hpp"
#include "BoingKit/zzzz__BitArray_def.hpp"
//  Writing Method size for method: ::BoingKit::BitArray.get_Blocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::BoingKit::BitArray::*)()>(&::BoingKit::BitArray::get_Blocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ad98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"get_Blocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray.GetBlockIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::BoingKit::BitArray::GetBlockIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"GetBlockIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray.GetSubIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::BoingKit::BitArray::GetSubIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2adb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"GetSubIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray.SetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool, ::ArrayW<int32_t>)>(&::BoingKit::BitArray::SetBit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2adc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"SetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray.IsBitSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::ArrayW<int32_t>)>(&::BoingKit::BitArray::IsBitSet)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2ae48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"IsBitSet", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BitArray::*)(int32_t)>(&::BoingKit::BitArray::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2ae90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BitArray::*)(int32_t)>(&::BoingKit::BitArray::Resize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e2afcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BitArray::*)()>(&::BoingKit::BitArray::Clear)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e2af0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray.SetAllBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BitArray::*)(bool)>(&::BoingKit::BitArray::SetAllBits)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e2b0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"SetAllBits", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray.SetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BitArray::*)(int32_t, bool)>(&::BoingKit::BitArray::SetBit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2b170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"SetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BitArray.IsBitSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::BitArray::*)(int32_t)>(&::BoingKit::BitArray::IsBitSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2b184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"IsBitSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<int32_t> BoingKit::BitArray::get_Blocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"get_Blocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(*this, ___internal_method);
}
inline int32_t BoingKit::BitArray::GetBlockIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"GetBlockIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index);
}
inline int32_t BoingKit::BitArray::GetSubIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"GetSubIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index);
}
inline void BoingKit::BitArray::SetBit(int32_t  index, bool  value, ::ArrayW<int32_t>  blocks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"SetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, value, blocks);
}
inline bool BoingKit::BitArray::IsBitSet(int32_t  index, ::ArrayW<int32_t>  blocks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"IsBitSet", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index, blocks);
}
inline void BoingKit::BitArray::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
inline void BoingKit::BitArray::Resize(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
inline void BoingKit::BitArray::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BoingKit::BitArray::SetAllBits(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"SetAllBits", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void BoingKit::BitArray::SetBit(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"SetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool BoingKit::BitArray::IsBitSet(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BitArray>(),
                        {"IsBitSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "m_aBlock", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BoingKit::BitArray::BitArray(::ArrayW<int32_t>  m_aBlock) noexcept  {
this->m_aBlock = m_aBlock;
}
// Ctor Parameters []
constexpr ::BoingKit::BitArray::BitArray()   {
}
