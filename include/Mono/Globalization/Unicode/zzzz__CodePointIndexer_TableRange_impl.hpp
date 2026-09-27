#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/CodePointIndexer_TableRange.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_TableRange_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CodePointIndexer_TableRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodePointIndexer_TableRange::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::CodePointIndexer_TableRange::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa110f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodePointIndexer_TableRange>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CodePointIndexer_TableRange::_ctor(int32_t  start, int32_t  end, int32_t  indexStart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodePointIndexer_TableRange>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, end, indexStart);
}
// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IndexStart", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IndexEnd", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CodePointIndexer_TableRange::CodePointIndexer_TableRange(int32_t  Start, int32_t  End, int32_t  Count, int32_t  IndexStart, int32_t  IndexEnd) noexcept  {
this->Start = Start;
this->End = End;
this->Count = Count;
this->IndexStart = IndexStart;
this->IndexEnd = IndexEnd;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CodePointIndexer_TableRange::CodePointIndexer_TableRange()   {
}
