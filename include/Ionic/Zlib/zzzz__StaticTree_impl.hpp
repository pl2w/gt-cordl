#pragma once
// IWYU pragma private; include "Ionic/Zlib/StaticTree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Ionic/Zlib/zzzz__StaticTree_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::StaticTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::StaticTree::*)(::ArrayW<int16_t>, ::ArrayW<int32_t>, int32_t, int32_t, int32_t)>(&::Ionic::Zlib::StaticTree::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa79b14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::StaticTree*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& Ionic::Zlib::StaticTree::__cordl_internal_get_treeCodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeCodes;
}
constexpr ::ArrayW<int16_t> const& Ionic::Zlib::StaticTree::__cordl_internal_get_treeCodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeCodes;
}
constexpr void Ionic::Zlib::StaticTree::__cordl_internal_set_treeCodes(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeCodes = value;
}
constexpr ::ArrayW<int32_t>& Ionic::Zlib::StaticTree::__cordl_internal_get_extraBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraBits;
}
constexpr ::ArrayW<int32_t> const& Ionic::Zlib::StaticTree::__cordl_internal_get_extraBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraBits;
}
constexpr void Ionic::Zlib::StaticTree::__cordl_internal_set_extraBits(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraBits = value;
}
constexpr int32_t& Ionic::Zlib::StaticTree::__cordl_internal_get_extraBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraBase;
}
constexpr int32_t const& Ionic::Zlib::StaticTree::__cordl_internal_get_extraBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraBase;
}
constexpr void Ionic::Zlib::StaticTree::__cordl_internal_set_extraBase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraBase = value;
}
constexpr int32_t& Ionic::Zlib::StaticTree::__cordl_internal_get_elems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elems;
}
constexpr int32_t const& Ionic::Zlib::StaticTree::__cordl_internal_get_elems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elems;
}
constexpr void Ionic::Zlib::StaticTree::__cordl_internal_set_elems(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elems = value;
}
constexpr int32_t& Ionic::Zlib::StaticTree::__cordl_internal_get_maxLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLength;
}
constexpr int32_t const& Ionic::Zlib::StaticTree::__cordl_internal_get_maxLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLength;
}
constexpr void Ionic::Zlib::StaticTree::__cordl_internal_set_maxLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLength = value;
}
inline void Ionic::Zlib::StaticTree::setStaticF_lengthAndLiteralsTreeCodes(::ArrayW<int16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "lengthAndLiteralsTreeCodes", ::Ionic::Zlib::StaticTree*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Ionic::Zlib::StaticTree::getStaticF_lengthAndLiteralsTreeCodes()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "lengthAndLiteralsTreeCodes", ::Ionic::Zlib::StaticTree*>();
}
inline void Ionic::Zlib::StaticTree::setStaticF_distTreeCodes(::ArrayW<int16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "distTreeCodes", ::Ionic::Zlib::StaticTree*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Ionic::Zlib::StaticTree::getStaticF_distTreeCodes()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "distTreeCodes", ::Ionic::Zlib::StaticTree*>();
}
inline void Ionic::Zlib::StaticTree::setStaticF_Literals(::Ionic::Zlib::StaticTree*  value)  {
::cordl_internals::setStaticField<::Ionic::Zlib::StaticTree*, "Literals", ::Ionic::Zlib::StaticTree*>(std::forward<::Ionic::Zlib::StaticTree*>(value));
}
inline ::Ionic::Zlib::StaticTree* Ionic::Zlib::StaticTree::getStaticF_Literals()  {
return ::cordl_internals::getStaticField<::Ionic::Zlib::StaticTree*, "Literals", ::Ionic::Zlib::StaticTree*>();
}
inline void Ionic::Zlib::StaticTree::setStaticF_Distances(::Ionic::Zlib::StaticTree*  value)  {
::cordl_internals::setStaticField<::Ionic::Zlib::StaticTree*, "Distances", ::Ionic::Zlib::StaticTree*>(std::forward<::Ionic::Zlib::StaticTree*>(value));
}
inline ::Ionic::Zlib::StaticTree* Ionic::Zlib::StaticTree::getStaticF_Distances()  {
return ::cordl_internals::getStaticField<::Ionic::Zlib::StaticTree*, "Distances", ::Ionic::Zlib::StaticTree*>();
}
inline void Ionic::Zlib::StaticTree::setStaticF_BitLengths(::Ionic::Zlib::StaticTree*  value)  {
::cordl_internals::setStaticField<::Ionic::Zlib::StaticTree*, "BitLengths", ::Ionic::Zlib::StaticTree*>(std::forward<::Ionic::Zlib::StaticTree*>(value));
}
inline ::Ionic::Zlib::StaticTree* Ionic::Zlib::StaticTree::getStaticF_BitLengths()  {
return ::cordl_internals::getStaticField<::Ionic::Zlib::StaticTree*, "BitLengths", ::Ionic::Zlib::StaticTree*>();
}
inline void Ionic::Zlib::StaticTree::_ctor(::ArrayW<int16_t>  treeCodes, ::ArrayW<int32_t>  extraBits, int32_t  extraBase, int32_t  elems, int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::StaticTree*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, treeCodes, extraBits, extraBase, elems, maxLength);
}
inline ::Ionic::Zlib::StaticTree* Ionic::Zlib::StaticTree::New_ctor(::ArrayW<int16_t>  treeCodes, ::ArrayW<int32_t>  extraBits, int32_t  extraBase, int32_t  elems, int32_t  maxLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::StaticTree*>(treeCodes, extraBits, extraBase, elems, maxLength));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::StaticTree::StaticTree()   {
}
