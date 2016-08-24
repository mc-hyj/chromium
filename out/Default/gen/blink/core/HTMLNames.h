// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HTMLNames_h
#define HTMLNames_h

#include "core/CoreExport.h"
#include "core/dom/QualifiedName.h"
#include <memory>

namespace blink {

class HTMLQualifiedName : public QualifiedName { };

namespace HTMLNames {

// Namespace
CORE_EXPORT extern const WTF::AtomicString& xhtmlNamespaceURI;

// Tags
CORE_EXPORT extern const blink::HTMLQualifiedName& abbrTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& acronymTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& addressTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& articleTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& asideTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& bTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& basefontTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& bdoTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& bigTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& centerTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& citeTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& codeTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& commandTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& ddTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& dfnTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& dtTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& emTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& figcaptionTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& figureTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& footerTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& headerTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& hgroupTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& iTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& kbdTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& layerTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& mainTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& markTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& navTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& nobrTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& noframesTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& nolayerTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& plaintextTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& rbTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& rpTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& rtcTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& sTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& sampTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& sectionTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& smallTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& strikeTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& strongTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& subTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& supTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& ttTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& uTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& varTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& aTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& areaTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& audioTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& brTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& baseTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& bodyTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& canvasTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& contentTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& dlTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& datalistTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& detailsTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& dialogTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& dirTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& divTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& fontTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& formTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& frameTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& framesetTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& hrTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& headTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& h1Tag;
CORE_EXPORT extern const blink::HTMLQualifiedName& h2Tag;
CORE_EXPORT extern const blink::HTMLQualifiedName& h3Tag;
CORE_EXPORT extern const blink::HTMLQualifiedName& h4Tag;
CORE_EXPORT extern const blink::HTMLQualifiedName& h5Tag;
CORE_EXPORT extern const blink::HTMLQualifiedName& h6Tag;
CORE_EXPORT extern const blink::HTMLQualifiedName& htmlTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& iframeTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& liTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& labelTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& legendTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& mapTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& marqueeTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& menuTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& menuitemTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& metaTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& meterTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& delTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& insTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& olTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& optgroupTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& optionTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& pTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& paramTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& pictureTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& preTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& listingTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& xmpTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& progressTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& blockquoteTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& qTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& shadowTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& slotTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& sourceTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& spanTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& captionTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& tdTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& thTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& colTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& colgroupTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& tableTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& trTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& tbodyTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& tfootTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& theadTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& templateTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& titleTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& trackTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& ulTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& appletTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& bgsoundTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& imageTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& videoTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& buttonTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& fieldsetTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& keygenTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& outputTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& selectTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& textareaTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& embedTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& linkTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& scriptTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& styleTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& imgTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& inputTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& objectTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& bdiTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& noembedTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& noscriptTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& rtTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& rubyTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& summaryTag;
CORE_EXPORT extern const blink::HTMLQualifiedName& wbrTag;

// Attributes
CORE_EXPORT extern const blink::QualifiedName& abbrAttr;
CORE_EXPORT extern const blink::QualifiedName& acceptAttr;
CORE_EXPORT extern const blink::QualifiedName& accept_charsetAttr;
CORE_EXPORT extern const blink::QualifiedName& accesskeyAttr;
CORE_EXPORT extern const blink::QualifiedName& actionAttr;
CORE_EXPORT extern const blink::QualifiedName& alignAttr;
CORE_EXPORT extern const blink::QualifiedName& alinkAttr;
CORE_EXPORT extern const blink::QualifiedName& allowfullscreenAttr;
CORE_EXPORT extern const blink::QualifiedName& altAttr;
CORE_EXPORT extern const blink::QualifiedName& archiveAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_activedescendantAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_atomicAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_autocompleteAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_busyAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_checkedAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_controlsAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_currentAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_describedbyAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_disabledAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_dropeffectAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_expandedAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_flowtoAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_grabbedAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_haspopupAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_helpAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_hiddenAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_invalidAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_labelAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_labeledbyAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_labelledbyAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_levelAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_liveAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_multilineAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_multiselectableAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_orientationAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_ownsAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_posinsetAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_pressedAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_readonlyAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_relevantAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_requiredAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_selectedAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_setsizeAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_sortAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_valuemaxAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_valueminAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_valuenowAttr;
CORE_EXPORT extern const blink::QualifiedName& aria_valuetextAttr;
CORE_EXPORT extern const blink::QualifiedName& asAttr;
CORE_EXPORT extern const blink::QualifiedName& asyncAttr;
CORE_EXPORT extern const blink::QualifiedName& autocapitalizeAttr;
CORE_EXPORT extern const blink::QualifiedName& autocompleteAttr;
CORE_EXPORT extern const blink::QualifiedName& autofocusAttr;
CORE_EXPORT extern const blink::QualifiedName& autoplayAttr;
CORE_EXPORT extern const blink::QualifiedName& axisAttr;
CORE_EXPORT extern const blink::QualifiedName& backgroundAttr;
CORE_EXPORT extern const blink::QualifiedName& behaviorAttr;
CORE_EXPORT extern const blink::QualifiedName& bgcolorAttr;
CORE_EXPORT extern const blink::QualifiedName& borderAttr;
CORE_EXPORT extern const blink::QualifiedName& bordercolorAttr;
CORE_EXPORT extern const blink::QualifiedName& captureAttr;
CORE_EXPORT extern const blink::QualifiedName& cellpaddingAttr;
CORE_EXPORT extern const blink::QualifiedName& cellspacingAttr;
CORE_EXPORT extern const blink::QualifiedName& challengeAttr;
CORE_EXPORT extern const blink::QualifiedName& charAttr;
CORE_EXPORT extern const blink::QualifiedName& charoffAttr;
CORE_EXPORT extern const blink::QualifiedName& charsetAttr;
CORE_EXPORT extern const blink::QualifiedName& checkedAttr;
CORE_EXPORT extern const blink::QualifiedName& citeAttr;
CORE_EXPORT extern const blink::QualifiedName& classAttr;
CORE_EXPORT extern const blink::QualifiedName& classidAttr;
CORE_EXPORT extern const blink::QualifiedName& clearAttr;
CORE_EXPORT extern const blink::QualifiedName& codeAttr;
CORE_EXPORT extern const blink::QualifiedName& codebaseAttr;
CORE_EXPORT extern const blink::QualifiedName& codetypeAttr;
CORE_EXPORT extern const blink::QualifiedName& colorAttr;
CORE_EXPORT extern const blink::QualifiedName& colsAttr;
CORE_EXPORT extern const blink::QualifiedName& colspanAttr;
CORE_EXPORT extern const blink::QualifiedName& compactAttr;
CORE_EXPORT extern const blink::QualifiedName& contentAttr;
CORE_EXPORT extern const blink::QualifiedName& contenteditableAttr;
CORE_EXPORT extern const blink::QualifiedName& contextmenuAttr;
CORE_EXPORT extern const blink::QualifiedName& controlsAttr;
CORE_EXPORT extern const blink::QualifiedName& coordsAttr;
CORE_EXPORT extern const blink::QualifiedName& crossoriginAttr;
CORE_EXPORT extern const blink::QualifiedName& dataAttr;
CORE_EXPORT extern const blink::QualifiedName& datetimeAttr;
CORE_EXPORT extern const blink::QualifiedName& declareAttr;
CORE_EXPORT extern const blink::QualifiedName& defaultAttr;
CORE_EXPORT extern const blink::QualifiedName& deferAttr;
CORE_EXPORT extern const blink::QualifiedName& dirAttr;
CORE_EXPORT extern const blink::QualifiedName& directionAttr;
CORE_EXPORT extern const blink::QualifiedName& dirnameAttr;
CORE_EXPORT extern const blink::QualifiedName& disabledAttr;
CORE_EXPORT extern const blink::QualifiedName& disableremoteplaybackAttr;
CORE_EXPORT extern const blink::QualifiedName& downloadAttr;
CORE_EXPORT extern const blink::QualifiedName& draggableAttr;
CORE_EXPORT extern const blink::QualifiedName& enctypeAttr;
CORE_EXPORT extern const blink::QualifiedName& endAttr;
CORE_EXPORT extern const blink::QualifiedName& eventAttr;
CORE_EXPORT extern const blink::QualifiedName& faceAttr;
CORE_EXPORT extern const blink::QualifiedName& forAttr;
CORE_EXPORT extern const blink::QualifiedName& formAttr;
CORE_EXPORT extern const blink::QualifiedName& formactionAttr;
CORE_EXPORT extern const blink::QualifiedName& formenctypeAttr;
CORE_EXPORT extern const blink::QualifiedName& formmethodAttr;
CORE_EXPORT extern const blink::QualifiedName& formnovalidateAttr;
CORE_EXPORT extern const blink::QualifiedName& formtargetAttr;
CORE_EXPORT extern const blink::QualifiedName& frameAttr;
CORE_EXPORT extern const blink::QualifiedName& frameborderAttr;
CORE_EXPORT extern const blink::QualifiedName& headersAttr;
CORE_EXPORT extern const blink::QualifiedName& heightAttr;
CORE_EXPORT extern const blink::QualifiedName& hiddenAttr;
CORE_EXPORT extern const blink::QualifiedName& highAttr;
CORE_EXPORT extern const blink::QualifiedName& hrefAttr;
CORE_EXPORT extern const blink::QualifiedName& hreflangAttr;
CORE_EXPORT extern const blink::QualifiedName& hspaceAttr;
CORE_EXPORT extern const blink::QualifiedName& http_equivAttr;
CORE_EXPORT extern const blink::QualifiedName& iconAttr;
CORE_EXPORT extern const blink::QualifiedName& idAttr;
CORE_EXPORT extern const blink::QualifiedName& incrementalAttr;
CORE_EXPORT extern const blink::QualifiedName& inputmodeAttr;
CORE_EXPORT extern const blink::QualifiedName& integrityAttr;
CORE_EXPORT extern const blink::QualifiedName& isAttr;
CORE_EXPORT extern const blink::QualifiedName& ismapAttr;
CORE_EXPORT extern const blink::QualifiedName& keytypeAttr;
CORE_EXPORT extern const blink::QualifiedName& kindAttr;
CORE_EXPORT extern const blink::QualifiedName& labelAttr;
CORE_EXPORT extern const blink::QualifiedName& langAttr;
CORE_EXPORT extern const blink::QualifiedName& languageAttr;
CORE_EXPORT extern const blink::QualifiedName& leftmarginAttr;
CORE_EXPORT extern const blink::QualifiedName& linkAttr;
CORE_EXPORT extern const blink::QualifiedName& listAttr;
CORE_EXPORT extern const blink::QualifiedName& longdescAttr;
CORE_EXPORT extern const blink::QualifiedName& loopAttr;
CORE_EXPORT extern const blink::QualifiedName& lowAttr;
CORE_EXPORT extern const blink::QualifiedName& lowsrcAttr;
CORE_EXPORT extern const blink::QualifiedName& manifestAttr;
CORE_EXPORT extern const blink::QualifiedName& marginheightAttr;
CORE_EXPORT extern const blink::QualifiedName& marginwidthAttr;
CORE_EXPORT extern const blink::QualifiedName& maxAttr;
CORE_EXPORT extern const blink::QualifiedName& maxlengthAttr;
CORE_EXPORT extern const blink::QualifiedName& mayscriptAttr;
CORE_EXPORT extern const blink::QualifiedName& mediaAttr;
CORE_EXPORT extern const blink::QualifiedName& methodAttr;
CORE_EXPORT extern const blink::QualifiedName& minAttr;
CORE_EXPORT extern const blink::QualifiedName& minlengthAttr;
CORE_EXPORT extern const blink::QualifiedName& multipleAttr;
CORE_EXPORT extern const blink::QualifiedName& mutedAttr;
CORE_EXPORT extern const blink::QualifiedName& nameAttr;
CORE_EXPORT extern const blink::QualifiedName& nohrefAttr;
CORE_EXPORT extern const blink::QualifiedName& nonceAttr;
CORE_EXPORT extern const blink::QualifiedName& noresizeAttr;
CORE_EXPORT extern const blink::QualifiedName& noshadeAttr;
CORE_EXPORT extern const blink::QualifiedName& novalidateAttr;
CORE_EXPORT extern const blink::QualifiedName& nowrapAttr;
CORE_EXPORT extern const blink::QualifiedName& objectAttr;
CORE_EXPORT extern const blink::QualifiedName& onabortAttr;
CORE_EXPORT extern const blink::QualifiedName& onanimationendAttr;
CORE_EXPORT extern const blink::QualifiedName& onanimationiterationAttr;
CORE_EXPORT extern const blink::QualifiedName& onanimationstartAttr;
CORE_EXPORT extern const blink::QualifiedName& onbeforecopyAttr;
CORE_EXPORT extern const blink::QualifiedName& onbeforecutAttr;
CORE_EXPORT extern const blink::QualifiedName& onbeforepasteAttr;
CORE_EXPORT extern const blink::QualifiedName& onbeforeunloadAttr;
CORE_EXPORT extern const blink::QualifiedName& onblurAttr;
CORE_EXPORT extern const blink::QualifiedName& oncancelAttr;
CORE_EXPORT extern const blink::QualifiedName& oncanplayAttr;
CORE_EXPORT extern const blink::QualifiedName& oncanplaythroughAttr;
CORE_EXPORT extern const blink::QualifiedName& onchangeAttr;
CORE_EXPORT extern const blink::QualifiedName& onclickAttr;
CORE_EXPORT extern const blink::QualifiedName& oncloseAttr;
CORE_EXPORT extern const blink::QualifiedName& oncontextmenuAttr;
CORE_EXPORT extern const blink::QualifiedName& oncopyAttr;
CORE_EXPORT extern const blink::QualifiedName& oncuechangeAttr;
CORE_EXPORT extern const blink::QualifiedName& oncutAttr;
CORE_EXPORT extern const blink::QualifiedName& ondblclickAttr;
CORE_EXPORT extern const blink::QualifiedName& ondragAttr;
CORE_EXPORT extern const blink::QualifiedName& ondragendAttr;
CORE_EXPORT extern const blink::QualifiedName& ondragenterAttr;
CORE_EXPORT extern const blink::QualifiedName& ondragleaveAttr;
CORE_EXPORT extern const blink::QualifiedName& ondragoverAttr;
CORE_EXPORT extern const blink::QualifiedName& ondragstartAttr;
CORE_EXPORT extern const blink::QualifiedName& ondropAttr;
CORE_EXPORT extern const blink::QualifiedName& ondurationchangeAttr;
CORE_EXPORT extern const blink::QualifiedName& onemptiedAttr;
CORE_EXPORT extern const blink::QualifiedName& onendedAttr;
CORE_EXPORT extern const blink::QualifiedName& onerrorAttr;
CORE_EXPORT extern const blink::QualifiedName& onfocusAttr;
CORE_EXPORT extern const blink::QualifiedName& onfocusinAttr;
CORE_EXPORT extern const blink::QualifiedName& onfocusoutAttr;
CORE_EXPORT extern const blink::QualifiedName& ongotpointercaptureAttr;
CORE_EXPORT extern const blink::QualifiedName& onhashchangeAttr;
CORE_EXPORT extern const blink::QualifiedName& oninputAttr;
CORE_EXPORT extern const blink::QualifiedName& oninvalidAttr;
CORE_EXPORT extern const blink::QualifiedName& onkeydownAttr;
CORE_EXPORT extern const blink::QualifiedName& onkeypressAttr;
CORE_EXPORT extern const blink::QualifiedName& onkeyupAttr;
CORE_EXPORT extern const blink::QualifiedName& onlanguagechangeAttr;
CORE_EXPORT extern const blink::QualifiedName& onloadAttr;
CORE_EXPORT extern const blink::QualifiedName& onloadeddataAttr;
CORE_EXPORT extern const blink::QualifiedName& onloadedmetadataAttr;
CORE_EXPORT extern const blink::QualifiedName& onloadstartAttr;
CORE_EXPORT extern const blink::QualifiedName& onlostpointercaptureAttr;
CORE_EXPORT extern const blink::QualifiedName& onmessageAttr;
CORE_EXPORT extern const blink::QualifiedName& onmousedownAttr;
CORE_EXPORT extern const blink::QualifiedName& onmouseenterAttr;
CORE_EXPORT extern const blink::QualifiedName& onmouseleaveAttr;
CORE_EXPORT extern const blink::QualifiedName& onmousemoveAttr;
CORE_EXPORT extern const blink::QualifiedName& onmouseoutAttr;
CORE_EXPORT extern const blink::QualifiedName& onmouseoverAttr;
CORE_EXPORT extern const blink::QualifiedName& onmouseupAttr;
CORE_EXPORT extern const blink::QualifiedName& onmousewheelAttr;
CORE_EXPORT extern const blink::QualifiedName& onofflineAttr;
CORE_EXPORT extern const blink::QualifiedName& ononlineAttr;
CORE_EXPORT extern const blink::QualifiedName& onorientationchangeAttr;
CORE_EXPORT extern const blink::QualifiedName& onpagehideAttr;
CORE_EXPORT extern const blink::QualifiedName& onpageshowAttr;
CORE_EXPORT extern const blink::QualifiedName& onpasteAttr;
CORE_EXPORT extern const blink::QualifiedName& onpauseAttr;
CORE_EXPORT extern const blink::QualifiedName& onplayAttr;
CORE_EXPORT extern const blink::QualifiedName& onplayingAttr;
CORE_EXPORT extern const blink::QualifiedName& onpopstateAttr;
CORE_EXPORT extern const blink::QualifiedName& onprogressAttr;
CORE_EXPORT extern const blink::QualifiedName& onratechangeAttr;
CORE_EXPORT extern const blink::QualifiedName& onresetAttr;
CORE_EXPORT extern const blink::QualifiedName& onresizeAttr;
CORE_EXPORT extern const blink::QualifiedName& onscrollAttr;
CORE_EXPORT extern const blink::QualifiedName& onsearchAttr;
CORE_EXPORT extern const blink::QualifiedName& onseekedAttr;
CORE_EXPORT extern const blink::QualifiedName& onseekingAttr;
CORE_EXPORT extern const blink::QualifiedName& onselectAttr;
CORE_EXPORT extern const blink::QualifiedName& onselectionchangeAttr;
CORE_EXPORT extern const blink::QualifiedName& onselectstartAttr;
CORE_EXPORT extern const blink::QualifiedName& onshowAttr;
CORE_EXPORT extern const blink::QualifiedName& onstalledAttr;
CORE_EXPORT extern const blink::QualifiedName& onstorageAttr;
CORE_EXPORT extern const blink::QualifiedName& onsubmitAttr;
CORE_EXPORT extern const blink::QualifiedName& onsuspendAttr;
CORE_EXPORT extern const blink::QualifiedName& ontimeupdateAttr;
CORE_EXPORT extern const blink::QualifiedName& ontoggleAttr;
CORE_EXPORT extern const blink::QualifiedName& ontouchcancelAttr;
CORE_EXPORT extern const blink::QualifiedName& ontouchendAttr;
CORE_EXPORT extern const blink::QualifiedName& ontouchmoveAttr;
CORE_EXPORT extern const blink::QualifiedName& ontouchstartAttr;
CORE_EXPORT extern const blink::QualifiedName& ontransitionendAttr;
CORE_EXPORT extern const blink::QualifiedName& onunloadAttr;
CORE_EXPORT extern const blink::QualifiedName& onvolumechangeAttr;
CORE_EXPORT extern const blink::QualifiedName& onwaitingAttr;
CORE_EXPORT extern const blink::QualifiedName& onwebkitanimationendAttr;
CORE_EXPORT extern const blink::QualifiedName& onwebkitanimationiterationAttr;
CORE_EXPORT extern const blink::QualifiedName& onwebkitanimationstartAttr;
CORE_EXPORT extern const blink::QualifiedName& onwebkitfullscreenchangeAttr;
CORE_EXPORT extern const blink::QualifiedName& onwebkitfullscreenerrorAttr;
CORE_EXPORT extern const blink::QualifiedName& onwebkittransitionendAttr;
CORE_EXPORT extern const blink::QualifiedName& onwheelAttr;
CORE_EXPORT extern const blink::QualifiedName& openAttr;
CORE_EXPORT extern const blink::QualifiedName& optimumAttr;
CORE_EXPORT extern const blink::QualifiedName& patternAttr;
CORE_EXPORT extern const blink::QualifiedName& permissionsAttr;
CORE_EXPORT extern const blink::QualifiedName& pingAttr;
CORE_EXPORT extern const blink::QualifiedName& placeholderAttr;
CORE_EXPORT extern const blink::QualifiedName& posterAttr;
CORE_EXPORT extern const blink::QualifiedName& preloadAttr;
CORE_EXPORT extern const blink::QualifiedName& pseudoAttr;
CORE_EXPORT extern const blink::QualifiedName& radiogroupAttr;
CORE_EXPORT extern const blink::QualifiedName& readonlyAttr;
CORE_EXPORT extern const blink::QualifiedName& referrerpolicyAttr;
CORE_EXPORT extern const blink::QualifiedName& relAttr;
CORE_EXPORT extern const blink::QualifiedName& requiredAttr;
CORE_EXPORT extern const blink::QualifiedName& revAttr;
CORE_EXPORT extern const blink::QualifiedName& reversedAttr;
CORE_EXPORT extern const blink::QualifiedName& roleAttr;
CORE_EXPORT extern const blink::QualifiedName& rowsAttr;
CORE_EXPORT extern const blink::QualifiedName& rowspanAttr;
CORE_EXPORT extern const blink::QualifiedName& rulesAttr;
CORE_EXPORT extern const blink::QualifiedName& sandboxAttr;
CORE_EXPORT extern const blink::QualifiedName& schemeAttr;
CORE_EXPORT extern const blink::QualifiedName& scopeAttr;
CORE_EXPORT extern const blink::QualifiedName& scrollamountAttr;
CORE_EXPORT extern const blink::QualifiedName& scrolldelayAttr;
CORE_EXPORT extern const blink::QualifiedName& scrollingAttr;
CORE_EXPORT extern const blink::QualifiedName& selectAttr;
CORE_EXPORT extern const blink::QualifiedName& selectedAttr;
CORE_EXPORT extern const blink::QualifiedName& shapeAttr;
CORE_EXPORT extern const blink::QualifiedName& sizeAttr;
CORE_EXPORT extern const blink::QualifiedName& sizesAttr;
CORE_EXPORT extern const blink::QualifiedName& slotAttr;
CORE_EXPORT extern const blink::QualifiedName& spanAttr;
CORE_EXPORT extern const blink::QualifiedName& spellcheckAttr;
CORE_EXPORT extern const blink::QualifiedName& srcAttr;
CORE_EXPORT extern const blink::QualifiedName& srcdocAttr;
CORE_EXPORT extern const blink::QualifiedName& srclangAttr;
CORE_EXPORT extern const blink::QualifiedName& srcsetAttr;
CORE_EXPORT extern const blink::QualifiedName& standbyAttr;
CORE_EXPORT extern const blink::QualifiedName& startAttr;
CORE_EXPORT extern const blink::QualifiedName& stepAttr;
CORE_EXPORT extern const blink::QualifiedName& styleAttr;
CORE_EXPORT extern const blink::QualifiedName& summaryAttr;
CORE_EXPORT extern const blink::QualifiedName& tabindexAttr;
CORE_EXPORT extern const blink::QualifiedName& targetAttr;
CORE_EXPORT extern const blink::QualifiedName& textAttr;
CORE_EXPORT extern const blink::QualifiedName& titleAttr;
CORE_EXPORT extern const blink::QualifiedName& topmarginAttr;
CORE_EXPORT extern const blink::QualifiedName& translateAttr;
CORE_EXPORT extern const blink::QualifiedName& truespeedAttr;
CORE_EXPORT extern const blink::QualifiedName& typeAttr;
CORE_EXPORT extern const blink::QualifiedName& usemapAttr;
CORE_EXPORT extern const blink::QualifiedName& valignAttr;
CORE_EXPORT extern const blink::QualifiedName& valueAttr;
CORE_EXPORT extern const blink::QualifiedName& valuetypeAttr;
CORE_EXPORT extern const blink::QualifiedName& versionAttr;
CORE_EXPORT extern const blink::QualifiedName& vlinkAttr;
CORE_EXPORT extern const blink::QualifiedName& vspaceAttr;
CORE_EXPORT extern const blink::QualifiedName& webkitdirectoryAttr;
CORE_EXPORT extern const blink::QualifiedName& webkitdropzoneAttr;
CORE_EXPORT extern const blink::QualifiedName& widthAttr;
CORE_EXPORT extern const blink::QualifiedName& wrapAttr;

const unsigned HTMLTagsCount = 139;
CORE_EXPORT std::unique_ptr<const HTMLQualifiedName*[]> getHTMLTags();

const unsigned HTMLAttrsCount = 318;

void init();

} // HTMLNames
} // namespace blink

#endif