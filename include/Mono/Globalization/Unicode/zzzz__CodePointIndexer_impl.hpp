#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/CodePointIndexer.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_TableRange_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_TableRange_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::CodePointIndexer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::CodePointIndexer::*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, int32_t, int32_t)>(&::Mono::Globalization::Unicode::CodePointIndexer::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa110e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Globalization::Unicode::CodePointIndexer*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::CodePointIndexer.ToIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::CodePointIndexer::*)(int32_t)>(&::Mono::Globalization::Unicode::CodePointIndexer::ToIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa110f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Globalization::Unicode::CodePointIndexer*>(),
                        {"ToIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CodePointIndexer_TableRange>& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_ranges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ranges;
}
constexpr ::ArrayW<::GlobalNamespace::CodePointIndexer_TableRange> const& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_ranges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ranges;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_set_ranges(::ArrayW<::GlobalNamespace::CodePointIndexer_TableRange>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ranges = value;
}
constexpr int32_t& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_TotalCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalCount;
}
constexpr int32_t const& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_TotalCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalCount;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_set_TotalCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalCount = value;
}
constexpr int32_t& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_defaultIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultIndex;
}
constexpr int32_t const& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_defaultIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultIndex;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_set_defaultIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultIndex = value;
}
constexpr int32_t& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_defaultCP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCP;
}
constexpr int32_t const& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_defaultCP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCP;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_set_defaultCP(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultCP = value;
}
inline void Mono::Globalization::Unicode::CodePointIndexer::_ctor(::ArrayW<int32_t>  starts, ::ArrayW<int32_t>  ends, int32_t  defaultIndex, int32_t  defaultCP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Globalization::Unicode::CodePointIndexer*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, starts, ends, defaultIndex, defaultCP);
}
inline int32_t Mono::Globalization::Unicode::CodePointIndexer::ToIndex(int32_t  cp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Globalization::Unicode::CodePointIndexer*>(),
                        {"ToIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cp);
}
inline ::Mono::Globalization::Unicode::CodePointIndexer* Mono::Globalization::Unicode::CodePointIndexer::New_ctor(::ArrayW<int32_t>  starts, ::ArrayW<int32_t>  ends, int32_t  defaultIndex, int32_t  defaultCP)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Globalization::Unicode::CodePointIndexer*>(starts, ends, defaultIndex, defaultCP));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::CodePointIndexer::CodePointIndexer()   {
}
