// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: SpeechActMsg.capnp

#ifndef CAPNP_INCLUDED_a89f822a2978bd4a_
#define CAPNP_INCLUDED_a89f822a2978bd4a_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include <capnzero/ID.capnp.h>

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(fef39a4d8b9203e5);

}  // namespace schemas
}  // namespace capnp

namespace srg {

struct SpeechActMsg {
  SpeechActMsg() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(fef39a4d8b9203e5, 1, 5)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class SpeechActMsg::Reader {
public:
  typedef SpeechActMsg Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasSenderID() const;
  inline  ::capnzero::ID::Reader getSenderID() const;

  inline bool hasReceiverID() const;
  inline  ::capnzero::ID::Reader getReceiverID() const;

  inline bool hasActID() const;
  inline  ::capnzero::ID::Reader getActID() const;

  inline bool hasPreviousActID() const;
  inline  ::capnzero::ID::Reader getPreviousActID() const;

  inline bool hasText() const;
  inline  ::capnp::Text::Reader getText() const;

  inline  ::uint16_t getSpeechType() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class SpeechActMsg::Builder {
public:
  typedef SpeechActMsg Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasSenderID();
  inline  ::capnzero::ID::Builder getSenderID();
  inline void setSenderID( ::capnzero::ID::Reader value);
  inline  ::capnzero::ID::Builder initSenderID();
  inline void adoptSenderID(::capnp::Orphan< ::capnzero::ID>&& value);
  inline ::capnp::Orphan< ::capnzero::ID> disownSenderID();

  inline bool hasReceiverID();
  inline  ::capnzero::ID::Builder getReceiverID();
  inline void setReceiverID( ::capnzero::ID::Reader value);
  inline  ::capnzero::ID::Builder initReceiverID();
  inline void adoptReceiverID(::capnp::Orphan< ::capnzero::ID>&& value);
  inline ::capnp::Orphan< ::capnzero::ID> disownReceiverID();

  inline bool hasActID();
  inline  ::capnzero::ID::Builder getActID();
  inline void setActID( ::capnzero::ID::Reader value);
  inline  ::capnzero::ID::Builder initActID();
  inline void adoptActID(::capnp::Orphan< ::capnzero::ID>&& value);
  inline ::capnp::Orphan< ::capnzero::ID> disownActID();

  inline bool hasPreviousActID();
  inline  ::capnzero::ID::Builder getPreviousActID();
  inline void setPreviousActID( ::capnzero::ID::Reader value);
  inline  ::capnzero::ID::Builder initPreviousActID();
  inline void adoptPreviousActID(::capnp::Orphan< ::capnzero::ID>&& value);
  inline ::capnp::Orphan< ::capnzero::ID> disownPreviousActID();

  inline bool hasText();
  inline  ::capnp::Text::Builder getText();
  inline void setText( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initText(unsigned int size);
  inline void adoptText(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownText();

  inline  ::uint16_t getSpeechType();
  inline void setSpeechType( ::uint16_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class SpeechActMsg::Pipeline {
public:
  typedef SpeechActMsg Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::capnzero::ID::Pipeline getSenderID();
  inline  ::capnzero::ID::Pipeline getReceiverID();
  inline  ::capnzero::ID::Pipeline getActID();
  inline  ::capnzero::ID::Pipeline getPreviousActID();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool SpeechActMsg::Reader::hasSenderID() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool SpeechActMsg::Builder::hasSenderID() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnzero::ID::Reader SpeechActMsg::Reader::getSenderID() const {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnzero::ID::Builder SpeechActMsg::Builder::getSenderID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::capnzero::ID::Pipeline SpeechActMsg::Pipeline::getSenderID() {
  return  ::capnzero::ID::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void SpeechActMsg::Builder::setSenderID( ::capnzero::ID::Reader value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnzero::ID::Builder SpeechActMsg::Builder::initSenderID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void SpeechActMsg::Builder::adoptSenderID(
    ::capnp::Orphan< ::capnzero::ID>&& value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnzero::ID> SpeechActMsg::Builder::disownSenderID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool SpeechActMsg::Reader::hasReceiverID() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool SpeechActMsg::Builder::hasReceiverID() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnzero::ID::Reader SpeechActMsg::Reader::getReceiverID() const {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnzero::ID::Builder SpeechActMsg::Builder::getReceiverID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::capnzero::ID::Pipeline SpeechActMsg::Pipeline::getReceiverID() {
  return  ::capnzero::ID::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void SpeechActMsg::Builder::setReceiverID( ::capnzero::ID::Reader value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnzero::ID::Builder SpeechActMsg::Builder::initReceiverID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void SpeechActMsg::Builder::adoptReceiverID(
    ::capnp::Orphan< ::capnzero::ID>&& value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnzero::ID> SpeechActMsg::Builder::disownReceiverID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool SpeechActMsg::Reader::hasActID() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool SpeechActMsg::Builder::hasActID() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnzero::ID::Reader SpeechActMsg::Reader::getActID() const {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnzero::ID::Builder SpeechActMsg::Builder::getActID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::capnzero::ID::Pipeline SpeechActMsg::Pipeline::getActID() {
  return  ::capnzero::ID::Pipeline(_typeless.getPointerField(2));
}
#endif  // !CAPNP_LITE
inline void SpeechActMsg::Builder::setActID( ::capnzero::ID::Reader value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnzero::ID::Builder SpeechActMsg::Builder::initActID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void SpeechActMsg::Builder::adoptActID(
    ::capnp::Orphan< ::capnzero::ID>&& value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnzero::ID> SpeechActMsg::Builder::disownActID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline bool SpeechActMsg::Reader::hasPreviousActID() const {
  return !_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline bool SpeechActMsg::Builder::hasPreviousActID() {
  return !_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline  ::capnzero::ID::Reader SpeechActMsg::Reader::getPreviousActID() const {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline  ::capnzero::ID::Builder SpeechActMsg::Builder::getPreviousActID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::get(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::capnzero::ID::Pipeline SpeechActMsg::Pipeline::getPreviousActID() {
  return  ::capnzero::ID::Pipeline(_typeless.getPointerField(3));
}
#endif  // !CAPNP_LITE
inline void SpeechActMsg::Builder::setPreviousActID( ::capnzero::ID::Reader value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline  ::capnzero::ID::Builder SpeechActMsg::Builder::initPreviousActID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::init(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline void SpeechActMsg::Builder::adoptPreviousActID(
    ::capnp::Orphan< ::capnzero::ID>&& value) {
  ::capnp::_::PointerHelpers< ::capnzero::ID>::adopt(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnzero::ID> SpeechActMsg::Builder::disownPreviousActID() {
  return ::capnp::_::PointerHelpers< ::capnzero::ID>::disown(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}

inline bool SpeechActMsg::Reader::hasText() const {
  return !_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline bool SpeechActMsg::Builder::hasText() {
  return !_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader SpeechActMsg::Reader::getText() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder SpeechActMsg::Builder::getText() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline void SpeechActMsg::Builder::setText( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder SpeechActMsg::Builder::initText(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), size);
}
inline void SpeechActMsg::Builder::adoptText(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> SpeechActMsg::Builder::disownText() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}

inline  ::uint16_t SpeechActMsg::Reader::getSpeechType() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t SpeechActMsg::Builder::getSpeechType() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void SpeechActMsg::Builder::setSpeechType( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

}  // namespace

#endif  // CAPNP_INCLUDED_a89f822a2978bd4a_
