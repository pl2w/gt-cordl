#pragma once
// IWYU pragma private; include "Fusion/Allocator_Config.hpp"
#include "Fusion/zzzz__PageSizes_impl.hpp"
#include "Fusion/zzzz__Allocator_Config_def.hpp"
#include "Fusion/zzzz__PageSizes_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Allocator_Config.get_BlockByteSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Allocator_Config::*)()>(&::GlobalNamespace::Allocator_Config::get_BlockByteSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f6c218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"get_BlockByteSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Config.get_BlockWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Allocator_Config::*)()>(&::GlobalNamespace::Allocator_Config::get_BlockWordCount)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f6ed94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"get_BlockWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Config.get_HeapSizeUsable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Allocator_Config::*)()>(&::GlobalNamespace::Allocator_Config::get_HeapSizeUsable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"get_HeapSizeUsable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Config.get_HeapSizeAllocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Allocator_Config::*)()>(&::GlobalNamespace::Allocator_Config::get_HeapSizeAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f6edd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"get_HeapSizeAllocated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Config._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_Config::*)(::Fusion::PageSizes, int32_t, int32_t)>(&::GlobalNamespace::Allocator_Config::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f6f98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::PageSizes>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Config.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Allocator_Config::*)(::GlobalNamespace::Allocator_Config)>(&::GlobalNamespace::Allocator_Config::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f6fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Allocator_Config>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Config.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Allocator_Config::*)(::System::Object*)>(&::GlobalNamespace::Allocator_Config::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f6fa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                    {::i2c::class_of<::GlobalNamespace::Allocator_Config>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Config.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Allocator_Config::*)()>(&::GlobalNamespace::Allocator_Config::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f6fac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                    {::i2c::class_of<::GlobalNamespace::Allocator_Config>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Config.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Allocator_Config::*)()>(&::GlobalNamespace::Allocator_Config::ToString)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5f6fad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                    {::i2c::class_of<::GlobalNamespace::Allocator_Config>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::Allocator_Config::__cordl_internal_get_BlockShift()  {
return this->___BlockShift;
}
constexpr int32_t const& GlobalNamespace::Allocator_Config::__cordl_internal_get_BlockShift() const {
return this->___BlockShift;
}
constexpr void GlobalNamespace::Allocator_Config::__cordl_internal_set_BlockShift(int32_t  value)  {
this->___BlockShift = value;
}
constexpr int32_t& GlobalNamespace::Allocator_Config::__cordl_internal_get_BlockCount()  {
return this->___BlockCount;
}
constexpr int32_t const& GlobalNamespace::Allocator_Config::__cordl_internal_get_BlockCount() const {
return this->___BlockCount;
}
constexpr void GlobalNamespace::Allocator_Config::__cordl_internal_set_BlockCount(int32_t  value)  {
this->___BlockCount = value;
}
constexpr int32_t& GlobalNamespace::Allocator_Config::__cordl_internal_get_GlobalsSize()  {
return this->___GlobalsSize;
}
constexpr int32_t const& GlobalNamespace::Allocator_Config::__cordl_internal_get_GlobalsSize() const {
return this->___GlobalsSize;
}
constexpr void GlobalNamespace::Allocator_Config::__cordl_internal_set_GlobalsSize(int32_t  value)  {
this->___GlobalsSize = value;
}
inline int32_t GlobalNamespace::Allocator_Config::get_BlockByteSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"get_BlockByteSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Allocator_Config::get_BlockWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"get_BlockWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Allocator_Config::get_HeapSizeUsable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"get_HeapSizeUsable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Allocator_Config::get_HeapSizeAllocated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"get_HeapSizeAllocated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Allocator_Config::_ctor(::Fusion::PageSizes  shift, int32_t  count, int32_t  globalsSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::PageSizes>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shift, count, globalsSize);
}
inline bool GlobalNamespace::Allocator_Config::Equals(::GlobalNamespace::Allocator_Config  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Config>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Allocator_Config>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Allocator_Config::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Allocator_Config>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::Allocator_Config::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Allocator_Config>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::Allocator_Config::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Allocator_Config>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "BlockShift", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BlockCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GlobalsSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Allocator_Config::Allocator_Config(int32_t  BlockShift, int32_t  BlockCount, int32_t  GlobalsSize) noexcept  {
this->BlockShift = BlockShift;
this->BlockCount = BlockCount;
this->GlobalsSize = GlobalsSize;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Allocator_Config::Allocator_Config()   {
}
constexpr ::Fusion::PageSizes  GlobalNamespace::Allocator_Config::DEFAULT_BLOCK_SHIFT{static_cast<int32_t>(0xf)};
