#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableHeader.hpp"
#include "Fusion/Sockets/zzzz__ReliableId_impl.hpp"
#include "Fusion/Sockets/zzzz__ReliableHeader_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::ReliableHeader.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::Fusion::Sockets::ReliableHeader*)>(&::Fusion::Sockets::ReliableHeader::GetData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6033b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableHeader>(),
                        {"GetData", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::ReliableHeader*& Fusion::Sockets::ReliableHeader::__cordl_internal_get_Next()  {
return this->___Next;
}
constexpr ::Fusion::Sockets::ReliableHeader* const& Fusion::Sockets::ReliableHeader::__cordl_internal_get_Next() const {
return this->___Next;
}
constexpr void Fusion::Sockets::ReliableHeader::__cordl_internal_set_Next(::Fusion::Sockets::ReliableHeader*  value)  {
this->___Next = value;
}
constexpr ::Fusion::Sockets::ReliableHeader*& Fusion::Sockets::ReliableHeader::__cordl_internal_get_Prev()  {
return this->___Prev;
}
constexpr ::Fusion::Sockets::ReliableHeader* const& Fusion::Sockets::ReliableHeader::__cordl_internal_get_Prev() const {
return this->___Prev;
}
constexpr void Fusion::Sockets::ReliableHeader::__cordl_internal_set_Prev(::Fusion::Sockets::ReliableHeader*  value)  {
this->___Prev = value;
}
constexpr ::Fusion::Sockets::ReliableId& Fusion::Sockets::ReliableHeader::__cordl_internal_get_Id()  {
return this->___Id;
}
constexpr ::Fusion::Sockets::ReliableId const& Fusion::Sockets::ReliableHeader::__cordl_internal_get_Id() const {
return this->___Id;
}
constexpr void Fusion::Sockets::ReliableHeader::__cordl_internal_set_Id(::Fusion::Sockets::ReliableId  value)  {
this->___Id = value;
}
inline uint8_t* Fusion::Sockets::ReliableHeader::GetData(::Fusion::Sockets::ReliableHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableHeader>(),
                        {"GetData", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, header);
}
// Ctor Parameters [CppParam { name: "Next", ty: "::Fusion::Sockets::ReliableHeader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Prev", ty: "::Fusion::Sockets::ReliableHeader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Id", ty: "::Fusion::Sockets::ReliableId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::ReliableHeader::ReliableHeader(::Fusion::Sockets::ReliableHeader*  Next, ::Fusion::Sockets::ReliableHeader*  Prev, ::Fusion::Sockets::ReliableId  Id) noexcept  {
this->Next = Next;
this->Prev = Prev;
this->Id = Id;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::ReliableHeader::ReliableHeader()   {
}
